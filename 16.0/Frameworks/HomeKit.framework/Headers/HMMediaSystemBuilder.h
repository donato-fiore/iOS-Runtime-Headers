// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIASYSTEMBUILDER_H
#define HMMEDIASYSTEMBUILDER_H

@class HMFActivity, NSString, NSArray, NSUUID;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "HMMutableArray.h"
#import "_HMContext.h"
#import "HMHome.h"
#import "HMMediaSystem.h"

@interface HMMediaSystemBuilder : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMFActivity *activity; // ivar: _activity
@property (retain, nonatomic) NSString *builderSessionID; // ivar: _builderSessionID
@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) HMMutableArray *componentsArray; // ivar: _componentsArray
@property (copy, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HMMediaSystem *mediaSystem; // ivar: _mediaSystem
@property (readonly, nonatomic) NSUUID *mediaSystemUUID; // ivar: _mediaSystemUUID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)canSupportMediaSystem:(id)arg0 ;
+(BOOL)isStereoPairingSupportedForAccessories:(id)arg0 ;
+(BOOL)supportsMediaSystem:(id)arg0 ;
+(id)logCategory;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 mediaSystemUUID:(id)arg1 context:(id)arg2 components:(id)arg3 ;
-(id)initWithMediaSystem:(id)arg0 ;
-(id)logIdentifier;
-(id)resultingMediaSystemFromResponse:(id)arg0 error:(*id)arg1 ;
// -(void)_callCompletion:(id)arg0 builderSessionID:(unk)arg1 error:(id)arg2 response:(id)arg3  ;
-(void)_commitWithCompletionHandler:(id)arg0 ;
-(void)_handleResultingMediaSystem:(id)arg0 ;
-(void)commitWithCompletionHandler:(id)arg0 ;
-(void)handleResultingMediaSystem:(id)arg0 ;
-(void)legacyHandleResultingMediaSystem:(id)arg0 ;


@end


#endif