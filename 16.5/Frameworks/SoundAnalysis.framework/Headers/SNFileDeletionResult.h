// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFILEDELETIONRESULT_H
#define SNFILEDELETIONRESULT_H

@class NSString, NSError;
@protocol SNResult;

#import <Foundation/Foundation.h>


@interface SNFileDeletionResult : NSObject <SNResult>

 {
    NSString *_fileName;
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif