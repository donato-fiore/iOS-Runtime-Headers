// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSIGNOREVOICETRIGGERASSERTION_H
#define HPSIGNOREVOICETRIGGERASSERTION_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface HPSIgnoreVoiceTriggerAssertion : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithConnectionProvider:(id)arg0 identifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_handleConnectionInterrupted;
-(void)_startSiriVoiceTriggerAssertionWithIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif