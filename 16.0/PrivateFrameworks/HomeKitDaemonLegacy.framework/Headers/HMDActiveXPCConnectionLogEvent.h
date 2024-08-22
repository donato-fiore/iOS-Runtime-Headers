// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACTIVEXPCCONNECTIONLOGEVENT_H
#define HMDACTIVEXPCCONNECTIONLOGEVENT_H

@class HMMLogEvent, NSString;



@interface HMDActiveXPCConnectionLogEvent : HMMLogEvent

@property (readonly, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly) BOOL added; // ivar: _added
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)initWithNewXPCConnectionAdded:(id)arg0 ;
+(id)initWithXPCConnectionRemoved:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 added:(BOOL)arg1 ;


@end


#endif