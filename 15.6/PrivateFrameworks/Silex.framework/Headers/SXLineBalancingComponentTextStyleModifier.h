// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXLINEBALANCINGCOMPONENTTEXTSTYLEMODIFIER_H
#define SXLINEBALANCINGCOMPONENTTEXTSTYLEMODIFIER_H

@class NSString;
@protocol SXDOMModifying;

#import <Foundation/Foundation.h>

#import "SXLineBalancingSettings.h"

@interface SXLineBalancingComponentTextStyleModifier : NSObject <SXDOMModifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXLineBalancingSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


-(id)initWithSettings:(id)arg0 ;
-(void)enableLineBalancingForComponentTextStyleWithIdentifier:(id)arg0 DOM:(id)arg1 context:(id)arg2 ;
-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif