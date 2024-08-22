// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSNAPSHOTCOORDINATOR_H
#define PKPASSSNAPSHOTCOORDINATOR_H

@class NSArray, NSString;
@protocol PKPassSnapshotCoordinatorProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPassSnapshotCoordinator : NSObject <PKPassSnapshotCoordinatorProtocol>

 {
    NSArray *_secureElementIdentifiers;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fallbackImageForCredential:(id)arg0 ;
-(id)cardSnapshotForSource:(id)arg0 withSize:(struct CGSize )arg1 completion:(id)arg2 ;
-(id)initWithSEIDs:(id)arg0 ;
-(void)_createPassSnapshotFromPaymentPass:(id)arg0 withSize:(struct CGSize )arg1 completion:(id)arg2 ;


@end


#endif