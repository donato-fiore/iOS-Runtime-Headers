// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REMDACALDAVSYNCREPLICAMANAGERPROVIDER_H
#define _REMDACALDAVSYNCREPLICAMANAGERPROVIDER_H

@class NSString;
@protocol REMReplicaManagerProviding;

#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface _REMDACalDAVSyncReplicaManagerProvider : NSObject <REMReplicaManagerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) REMStore *store; // ivar: _store
@property (readonly) Class superclass;


+(id)replicaManagerForAccountID:(id)arg0 withStore:(id)arg1 ;
+(id)unsavedReplicaManagersForAccountIDs:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)replicaManagerForAccountID:(id)arg0 ;
-(id)unsavedReplicaManagersForAccountIDs:(id)arg0 ;


@end


#endif