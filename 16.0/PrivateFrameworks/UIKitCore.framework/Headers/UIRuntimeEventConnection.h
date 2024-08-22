// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIRUNTIMEEVENTCONNECTION_H
#define UIRUNTIMEEVENTCONNECTION_H



#import "UIRuntimeConnection.h"

@interface UIRuntimeEventConnection : UIRuntimeConnection

@property (readonly) SEL action;
@property NSUInteger eventMask; // ivar: eventMask
@property (readonly) id *target;


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)connect;
-(void)connectForSimulator;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif