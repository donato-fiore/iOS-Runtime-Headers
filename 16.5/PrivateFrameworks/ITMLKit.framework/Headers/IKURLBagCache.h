// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKURLBAGCACHE_H
#define IKURLBAGCACHE_H

@class NSString, NSDictionary, NSDate, AMSProcessInfo, SSURLBag;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface IKURLBagCache : NSObject <AMSBagProtocol>



@property (readonly, nonatomic) NSString *cachePath; // ivar: _cachePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *existingDictionary; // ivar: _existingDictionary
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SSURLBag *urlBag; // ivar: _urlBag


+(id)URLBagContext;
+(id)sharedCache;
-(BOOL)isLoaded;
-(BOOL)isTrustedURL:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)_bagValueForKey:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)_urlForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)init;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)_loadWithNotification:(BOOL)arg0 completion:(id)arg1 ;
-(void)checkTrustStatusForURL:(id)arg0 completion:(id)arg1 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;
-(void)loadValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)updateWithInvalidation:(BOOL)arg0 ;


@end


#endif