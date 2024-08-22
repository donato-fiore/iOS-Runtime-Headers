// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXHOSTUISESSION_H
#define EXHOSTUISESSION_H

@class NSString, NSXPCListenerEndpoint;
@protocol _EXExtensionProcessObserver;


#import "EXUISession.h"

@interface EXHostUISession : EXUISession <_EXExtensionProcessObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)processDidInvalidate:(id)arg0 ;


@end


#endif