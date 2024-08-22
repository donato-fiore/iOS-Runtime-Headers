// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCDREADER_H
#define OCDREADER_H

@class NSData, NSString, NSError;
@protocol TCCancelDelegate, OCDReaderDelegate;

#import <Foundation/Foundation.h>


@interface OCDReader : NSObject

@property (retain, nonatomic) NSObject<TCCancelDelegate> *cancelDelegate; // ivar: mCancelDelegate
@property (retain, nonatomic) NSData *data; // ivar: mData
@property (weak, nonatomic) NSObject<OCDReaderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *fileName; // ivar: mFileName
@property (nonatomic) BOOL isThumbnail; // ivar: mIsThumbnail
@property (retain, nonatomic) NSError *startError; // ivar: mStartError


-(BOOL)isBinaryReader;
-(BOOL)start;
-(BOOL)verifyFileFormat;
-(id)initWithCancelDelegate:(id)arg0 ;
-(id)read;


@end


#endif