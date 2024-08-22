// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHPEOPLEWIDGETPERSONDETAILINTERACTIONCONTEXT_H
#define SBHPEOPLEWIDGETPERSONDETAILINTERACTIONCONTEXT_H

@class UIViewController, UIView, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBIconView.h"

@interface SBHPeopleWidgetPersonDetailInteractionContext : NSObject <NSCopying>



@property (readonly, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) CGRect homeScreenContentFrame; // ivar: _homeScreenContentFrame
@property (readonly, nonatomic) UIView *homeScreenContentView; // ivar: _homeScreenContentView
@property (readonly, copy, nonatomic) NSURL *personURL; // ivar: _personURL
@property (readonly, nonatomic) SBIconView *referenceIconView; // ivar: _referenceIconView
@property (readonly, nonatomic) SBIconView *sourceIconView; // ivar: _sourceIconView


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPersonURL:(id)arg0 sourceIconView:(id)arg1 referenceIconView:(id)arg2 containerViewController:(id)arg3 homeScreenContentView:(id)arg4 homeScreenContentFrame:(struct CGRect )arg5 ;


@end


#endif