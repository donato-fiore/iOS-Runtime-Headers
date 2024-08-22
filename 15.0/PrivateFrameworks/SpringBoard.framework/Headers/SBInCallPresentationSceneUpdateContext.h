// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINCALLPRESENTATIONSCENEUPDATECONTEXT_H
#define SBINCALLPRESENTATIONSCENEUPDATECONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBInCallPresentationSceneUpdateContext : NSObject

@property (copy, nonatomic) NSString *analyticsSource; // ivar: _analyticsSource
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSInteger executionTarget; // ivar: _executionTarget
@property (copy, nonatomic) id *postSceneUpdateHandler; // ivar: _postSceneUpdateHandler
@property (nonatomic) CGRect referenceFrame; // ivar: _referenceFrame
@property (copy, nonatomic) id *transitionRequestBuilderBlock; // ivar: _transitionRequestBuilderBlock
@property (copy, nonatomic) id *validatorHandler; // ivar: _validatorHandler


-(id)initWithReferenceFrame:(struct CGRect )arg0 analyticsSource:(id)arg1 transitionRequestBuilderBlock:(id)arg2 ;


@end


#endif