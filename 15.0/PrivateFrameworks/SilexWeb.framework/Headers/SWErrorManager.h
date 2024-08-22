// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWERRORMANAGER_H
#define SWERRORMANAGER_H

@class NSString, NSError;
@protocol SWMessageHandler, SWErrorProvider, SWErrorReporting, SWLogger;

#import <Foundation/Foundation.h>


@interface SWErrorManager : NSObject <SWMessageHandler, SWErrorProvider, SWErrorReporting>



@property (copy, nonatomic, setter=onError:) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(id)initWithMessageHandlerManager:(id)arg0 timeoutManager:(id)arg1 logger:(id)arg2 ;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;
-(void)onError:(id)arg0 ;
-(void)reportError:(id)arg0 ;


@end


#endif