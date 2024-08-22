// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INGETONSCREENCONTENTFORWARDINGACTION_H
#define INGETONSCREENCONTENTFORWARDINGACTION_H

@class NSString, WFOnScreenContentServiceOptions;


#import "INIntentForwardingAction.h"

@interface INGetOnScreenContentForwardingAction : INIntentForwardingAction

@property (readonly, copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) WFOnScreenContentServiceOptions *serviceOptions; // ivar: _serviceOptions


+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSceneIdentifier:(id)arg0 serviceOptions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif