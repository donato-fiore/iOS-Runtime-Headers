// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPSTRIPPREDICTIVETYPESIMPLEFADETRANSITION_H
#define CKAPPSTRIPPREDICTIVETYPESIMPLEFADETRANSITION_H

@class NSString;
@protocol CKAppStripPredictiveTypeTransition;

#import <Foundation/Foundation.h>


@interface CKAppStripPredictiveTypeSimpleFadeTransition : NSObject <CKAppStripPredictiveTypeTransition>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)transitionFromView:(id)arg0 toView:(id)arg1 withDirection:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif