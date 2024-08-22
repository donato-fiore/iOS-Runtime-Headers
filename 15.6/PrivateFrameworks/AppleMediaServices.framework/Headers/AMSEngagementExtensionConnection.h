// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSENGAGEMENTEXTENSIONCONNECTION_H
#define AMSENGAGEMENTEXTENSIONCONNECTION_H

@class NSString;
@protocol _EXPrincipalAdapting;

#import <Foundation/Foundation.h>


@interface AMSEngagementExtensionConnection : NSObject <_EXPrincipalAdapting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) id *principalObject; // ivar: _principalObject
@property (readonly) Class superclass;


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithPrincipalObject:(id)arg0 ;
-(void)performRequestWithObject:(id)arg0 completion:(id)arg1 ;


@end


#endif