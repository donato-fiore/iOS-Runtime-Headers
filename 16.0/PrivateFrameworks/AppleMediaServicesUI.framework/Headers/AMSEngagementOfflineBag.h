// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSENGAGEMENTOFFLINEBAG_H
#define AMSENGAGEMENTOFFLINEBAG_H

@class NSString, NSDate, AMSProcessInfo, AMSPromise, AMSSnapshotBag;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface AMSEngagementOfflineBag : NSObject <AMSBagProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) AMSPromise *snapshotPromise; // ivar: _snapshotPromise
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *underlyingBag; // ivar: _underlyingBag
@property (retain, nonatomic) AMSSnapshotBag *underlyingOfflineBag; // ivar: _underlyingOfflineBag


-(id)URLForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 account:(id)arg1 ;
-(id)_attemptBagLoad;
-(id)_getOfflineBagData;
-(id)_getSnapshotResult;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithUnderlyingBag:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif