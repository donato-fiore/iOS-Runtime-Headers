// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTAGENTDIAGNOSTICLISTENER_H
#define MTAGENTDIAGNOSTICLISTENER_H

@class NSString;
@protocol MTAgentNotificationListener, MTAgentDiagnosticDelegate;

#import <Foundation/Foundation.h>


@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTAgentDiagnosticDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_addStateHandler;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif