// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFILECOPYINGRESULT_H
#define SNFILECOPYINGRESULT_H

@class NSString, NSURL;
@protocol SNResult;

#import <Foundation/Foundation.h>


@interface SNFileCopyingResult : NSObject <SNResult>

 {
    NSString *_filename;
    NSInteger _fileSize;
    NSURL *_itemURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger fileSize;
@property (readonly) NSString *filename;
@property (readonly) NSUInteger hash;
@property (readonly) NSURL *itemURL;
@property (readonly) Class superclass;




@end


#endif