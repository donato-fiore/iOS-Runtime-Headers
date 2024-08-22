// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDKITCONTAINERMANATEEOBSERVER_H
#define WBSCLOUDKITCONTAINERMANATEEOBSERVER_H

@class CKContainer, NSMutableArray, NSString;
@protocol WBSCloudKitContainerManateeObserving, OS_dispatch_queue, WBSAppleAccountInformationProviding;

#import <Foundation/Foundation.h>


@interface WBSCloudKitContainerManateeObserver : NSObject <WBSCloudKitContainerManateeObserving>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CKContainer *_container;
    BOOL _determiningManateeState;
    NSInteger _currentState;
    id *_stateChangeObserver;
    NSMutableArray *_stateDeterminationCompletionBlocks;
    id<WBSAppleAccountInformationProviding> *_appleAccountInformationProvider;
}


@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *stateChangeObserver;
@property (readonly) Class superclass;


-(id)initWithContainerIdentifier:(id)arg0 appleAccountInformationProvider:(id)arg1 ;
-(void)_accountChanged:(id)arg0 ;
-(void)_determineManateeStateWithCompletion:(id)arg0 ;
-(void)determineManateeStateWithCompletion:(id)arg0 ;


@end


#endif