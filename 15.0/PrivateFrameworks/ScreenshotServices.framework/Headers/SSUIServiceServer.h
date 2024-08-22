// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSUISERVICESERVER_H
#define SSUISERVICESERVER_H

@class FBSServiceFacility;
@protocol SSUIServiceServerDelegate;



@interface SSUIServiceServer : FBSServiceFacility

@property (weak, nonatomic) NSObject<SSUIServiceServerDelegate> *delegate; // ivar: _delegate


-(BOOL)_handleHasAnySSUIServiceEntitlement:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;


@end


#endif