// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHJSONLFILEREADER_H
#define SHJSONLFILEREADER_H

@protocol SHJSONLFileReaderDelegate;

#import <Foundation/Foundation.h>


@interface SHJSONLFileReader : NSObject

@property (weak, nonatomic) NSObject<SHJSONLFileReaderDelegate> *delegate; // ivar: _delegate


-(BOOL)loadDataFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)readFromURL:(id)arg0 toStream:(id)arg1 error:(*id)arg2 ;
-(id)fileIOForReadingWithCompression:(BOOL)arg0 tap:(id)arg1 ;


@end


#endif