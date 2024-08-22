// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKWATCHFACEINPROCESSPREVIEWGENERATOR_H
#define CKWATCHFACEINPROCESSPREVIEWGENERATOR_H

@protocol CKWatchfacePreviewing;

#import <Foundation/Foundation.h>


@interface CKWatchfaceInProcessPreviewGenerator : NSObject <CKWatchfacePreviewing>





+(Class)implementation;
+(void)generateFacePreviewImageFromUrl:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif