// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IAMRECEIVEDEVENTTRIGGERCONTEXT_H
#define IAMRECEIVEDEVENTTRIGGERCONTEXT_H

@class NSString;
@protocol IAMTriggerContext, IAMEventProtocol;

#import <Foundation/Foundation.h>


@interface IAMReceivedEventTriggerContext : NSObject <IAMTriggerContext>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<IAMEventProtocol> *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)satisfiesPresentationTrigger:(id)arg0 ;
-(id)initWithEvent:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif