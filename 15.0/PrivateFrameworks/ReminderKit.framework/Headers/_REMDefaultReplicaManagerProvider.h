// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REMDEFAULTREPLICAMANAGERPROVIDER_H
#define _REMDEFAULTREPLICAMANAGERPROVIDER_H

@class NSString;
@protocol REMReplicaManagerProviding;

#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface _REMDefaultReplicaManagerProvider : NSObject <REMReplicaManagerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) REMStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)replicaManagerForAccountID:(id)arg0 ;
-(id)unsavedReplicaManagersForAccountIDs:(id)arg0 ;


@end


#endif