// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERACCESSORYLAYOUTELEMENT_H
#define SBSWITCHERACCESSORYLAYOUTELEMENT_H

@class NSString;
@protocol SBSwitcherLayoutElementProviding;

#import <Foundation/Foundation.h>


@interface SBSwitcherAccessoryLayoutElement : NSObject <SBSwitcherLayoutElementProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(NSUInteger)switcherLayoutElementType;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif