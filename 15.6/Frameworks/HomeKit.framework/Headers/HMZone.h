// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMZONE_H
#define HMZONE_H

@class HMFUnfairLock, NSString, NSArray, NSUUID;
@protocol NSSecureCoding, HMObjectMerge;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMMutableArray.h"
#import "HMHome.h"

@interface HMZone : NSObject <NSSecureCoding, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
}


@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (retain, nonatomic) HMMutableArray *currentRooms; // ivar: _currentRooms
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 ;
-(id)roomWithUUID:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_addRoom:(id)arg0 completionHandler:(id)arg1 ;
-(void)_recomputeAssistantIdentifier;
-(void)_removeRoom:(id)arg0 ;
-(void)_removeRoom:(id)arg0 completionHandler:(id)arg1 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)addRoom:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)removeRoom:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif