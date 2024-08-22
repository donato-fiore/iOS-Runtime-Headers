// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTEXTENSIONCONNECTION_H
#define AMSENGAGEMENTEXTENSIONCONNECTION_H

@protocol _EXMainConnectionHandler;

#import <Foundation/Foundation.h>


@interface AMSEngagementExtensionConnection : NSObject <_EXMainConnectionHandler>



@property (readonly) id *principalObject; // ivar: _principalObject


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithPrincipalObject:(id)arg0 ;
-(void)performRequestWithObject:(id)arg0 completion:(id)arg1 ;


@end


#endif