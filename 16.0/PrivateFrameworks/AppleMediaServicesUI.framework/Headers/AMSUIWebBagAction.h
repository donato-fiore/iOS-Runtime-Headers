// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBBAGACTION_H
#define AMSUIWEBBAGACTION_H

@class NSString, NSArray;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (retain, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (retain, nonatomic) NSArray *requestedKeys; // ivar: _requestedKeys
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;
-(void)_fetchValuesForKeys:(id)arg0 bag:(id)arg1 startingAtIndex:(NSInteger)arg2 valuesArray:(id)arg3 completion:(id)arg4 ;


@end


#endif