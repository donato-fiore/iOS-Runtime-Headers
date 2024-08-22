// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDAUTHOBSERVER_H
#define CDPDAUTHOBSERVER_H

@class NSMutableArray, NSString;
@protocol CDPDXPCEventListener;

#import <Foundation/Foundation.h>


@interface CDPDAuthObserver : NSObject <CDPDXPCEventListener>

 {
    NSMutableArray *_authListeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)eventReceived:(char *)arg0 eventInfo:(id)arg1 ;
-(void)registerListener:(id)arg0 ;


@end


#endif