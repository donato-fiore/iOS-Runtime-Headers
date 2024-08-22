// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICAMSBAGADAPTER_H
#define ICAMSBAGADAPTER_H

@class NSMutableArray, NSError, NSString, NSDate, AMSProcessInfo;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "ICURLBag.h"
#import "ICStoreRequestContext.h"

@interface ICAMSBagAdapter : NSObject <AMSBagProtocol>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_pendingBagValuePromises;
    ICURLBag *_urlBag;
    NSError *_urlBagLoadingError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (readonly) Class superclass;


+(BOOL)_value:(id)arg0 matchesExpectedType:(NSUInteger)arg1 ;
+(id)_valueForBagKey:(id)arg0 valueType:(NSUInteger)arg1 fromURLBag:(id)arg2 urlBagLoadingError:(id)arg3 valueRetrievingError:(*id)arg4 ;
+(id)_valueFromBagDictionary:(id)arg0 forKeyPath:(id)arg1 valueType:(NSUInteger)arg2 ;
-(id)URLForKey:(id)arg0 ;
-(id)_bagValueForKey:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)_didFinishLoadingBag:(id)arg0 error:(id)arg1 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif