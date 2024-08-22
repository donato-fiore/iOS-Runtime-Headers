// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNFILECOPYINGRESULT_H
#define SNFILECOPYINGRESULT_H

@class NSString, NSURL;
@protocol SNResult;

#import <Foundation/Foundation.h>


@interface SNFileCopyingResult : NSObject <SNResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (readonly) Class superclass;


-(id)initWithFileItem:(id)arg0 ;


@end


#endif