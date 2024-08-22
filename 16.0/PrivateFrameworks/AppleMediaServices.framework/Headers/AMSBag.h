// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBAG_H
#define AMSBAG_H

@class NSString, NSDate;
@protocol AMSBagProtocol, AMSBagDataSourceProtocol;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSBag : NSObject <AMSBagProtocol>



@property (retain, nonatomic) NSObject<AMSBagDataSourceProtocol> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionExtended;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic) optional<AMSCore::Bag> underlyingBag; // ivar: _underlyingBag


+(id)bagCache;
+(id)bagCacheAccessQueue;
+(id)bagForProfile:(id)arg0 profileVersion:(id)arg1 ;
+(id)bagForProfile:(id)arg0 profileVersion:(id)arg1 processInfo:(id)arg2 ;
+(void)_resetBagCache;
-(BOOL)isLoaded;
-(id)URLForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 account:(id)arg1 ;
-(id)_temporaryDictionary;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithBag:(struct Bag )arg0 processInfo:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif