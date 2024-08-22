// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASESSION_H
#define DASESSION_H

@class NSXPCConnection, NSString;
@protocol KmlSessionCallbacks, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DASessionInternal.h"

@interface DASession : NSObject <KmlSessionCallbacks, NSSecureCoding>

 {
    NSXPCConnection *_clientConnection;
    DASessionInternal *_internal;
    BOOL _hasEnded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)getDelegate;
-(id)getRemoteProxy:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)didEnd:(id)arg0 ;
-(void)didStart:(BOOL)arg0 ;
-(void)dispatchOnCallbackQueue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endSession;
-(void)setProxy:(id)arg0 ;


@end


#endif