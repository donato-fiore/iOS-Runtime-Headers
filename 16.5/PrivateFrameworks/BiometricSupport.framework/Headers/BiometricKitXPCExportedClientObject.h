// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITXPCEXPORTEDCLIENTOBJECT_H
#define BIOMETRICKITXPCEXPORTEDCLIENTOBJECT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "BiometricKitXPCExportedObject.h"

@interface BiometricKitXPCExportedClientObject : NSObject {
    BiometricKitXPCExportedObject *_exportedObject;
}


@property (readonly, nonatomic) BOOL clientAppIsBackground; // ivar: _clientAppIsBackground
@property (readonly, nonatomic) BOOL clientAppIsInactive; // ivar: _clientAppIsInactive
@property (readonly, nonatomic) NSUInteger clientID; // ivar: _clientID
@property (readonly, copy, nonatomic) NSDictionary *clientInfo; // ivar: _clientInfo
@property (readonly, nonatomic) BOOL delegateRegistered; // ivar: _delegateRegistered
@property (readonly, weak, nonatomic) BiometricKitXPCExportedObject *exportedObject;


-(id)description;
-(id)initWithClientID:(NSUInteger)arg0 clientInfo:(id)arg1 exportedObject:(id)arg2 ;
-(void)enrollFeedback:(id)arg0 ;
-(void)enrollResult:(id)arg0 ;
-(void)enrollResult:(id)arg0 details:(id)arg1 ;
-(void)enrollUpdate:(id)arg0 ;
-(void)homeButtonPressed;
-(void)matchResult:(id)arg0 details:(id)arg1 ;
-(void)statusMessage:(unsigned int)arg0 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 ;
-(void)taskResumeStatus:(int)arg0 ;
-(void)templateUpdate:(id)arg0 details:(id)arg1 ;
-(void)touchIDButtonPressed:(BOOL)arg0 ;


@end


#endif