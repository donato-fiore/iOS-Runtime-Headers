// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCERRORS_H
#define MLCERRORS_H


#import <Foundation/Foundation.h>


@interface MLCErrors : NSObject



+(id)createErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)invalidInputErrorForMethod:(id)arg0 description:(id)arg1 ;
+(id)invalidStateErrorForMethod:(id)arg0 description:(id)arg1 ;


@end


#endif