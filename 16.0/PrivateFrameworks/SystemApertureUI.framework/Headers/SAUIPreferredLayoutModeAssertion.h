// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIPREFERREDLAYOUTMODEASSERTION_H
#define SAUIPREFERREDLAYOUTMODEASSERTION_H

@class SAAssertion, NSString;
@protocol SAUILayoutModePreferring, SAUILayoutSpecifyingPrivate;


#import "SAUILayoutModePreference.h"

@interface SAUIPreferredLayoutModeAssertion : SAAssertion <SAUILayoutModePreferring>

 {
    SAUILayoutModePreference *_layoutModePreference;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger layoutModeChangeReason;
@property (readonly, weak, nonatomic) NSObject<SAUILayoutSpecifyingPrivate> *layoutSpecifier; // ivar: _layoutSpecifier
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (readonly) Class superclass;


-(id)initWithLayoutSpecifier:(id)arg0 layoutModePreference:(id)arg1 ;
-(id)initWithLayoutSpecifier:(id)arg0 preferredLayoutMode:(NSInteger)arg1 reason:(NSInteger)arg2 ;


@end


#endif