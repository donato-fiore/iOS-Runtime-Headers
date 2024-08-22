// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFELDSPARIDPROVIDER_H
#define FCFELDSPARIDPROVIDER_H

@class NSString, NSHashTable;
@protocol FCUserInfoObserving, FCFeldsparIDProvider;

#import <Foundation/Foundation.h>

#import "FCUserInfo.h"

@interface FCFeldsparIDProvider : NSObject <FCUserInfoObserving, FCFeldsparIDProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *feldsparID; // ivar: _feldsparID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (retain, nonatomic) FCUserInfo *userInfo; // ivar: _userInfo


+(id)sharedInstance;
-(id)init;
-(void)_updateFeldsparID:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)registerUserInfo:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)userInfoDidChangeFeldsparID:(id)arg0 fromCloud:(BOOL)arg1 ;


@end


#endif