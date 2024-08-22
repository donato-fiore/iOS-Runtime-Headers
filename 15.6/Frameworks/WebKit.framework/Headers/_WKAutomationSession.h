// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKAUTOMATIONSESSION_H
#define _WKAUTOMATIONSESSION_H

@class NSString;
@protocol WKObject, _WKAutomationSessionDelegate;

#import <Foundation/Foundation.h>

#import "_WKAutomationSessionConfiguration.h"

@interface _WKAutomationSession : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebAutomationSession> _session;
    RetainPtr<_WKAutomationSessionConfiguration> _configuration;
    WeakObjCPtr<id<_WKAutomationSessionDelegate>> _delegate;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_WKAutomationSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic, getter=isSimulatingUserInteraction) BOOL simulatingUserInteraction;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)terminate;


@end


#endif