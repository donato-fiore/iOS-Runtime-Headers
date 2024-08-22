// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCLASSKITCURRENTUSERPROVIDER_H
#define CRKCLASSKITCURRENTUSERPROVIDER_H

@protocol CRKClassKitFacade, CRKClassKitCurrentUser, CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKClassKitCurrentUserProvider : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade; // ivar: _classKitFacade
@property (retain, nonatomic) NSObject<CRKClassKitCurrentUser> *currentUser; // ivar: _currentUser
@property (nonatomic) BOOL currentUserFetched; // ivar: _currentUserFetched
@property (retain, nonatomic) NSObject<CRKCancelable> *currentUserSubscription; // ivar: _currentUserSubscription
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber


-(BOOL)isSafeToTalkToProgressdWithAccountState:(NSInteger)arg0 ;
-(id)initWithClassKitFacade:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performKVOUpdateForKeyPaths:(id)arg0 updateBlock:(id)arg1 ;
-(void)safeFetchCurrentUserWithCompletion:(id)arg0 ;
-(void)startObservingCurrentUser;
-(void)stopObservingCurrentUser;
-(void)updateCurrentUser;
-(void)updateCurrentUser:(id)arg0 fetched:(BOOL)arg1 ;


@end


#endif