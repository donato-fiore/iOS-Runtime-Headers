// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBCOLLECTIONCONFIGURATION_H
#define WBCOLLECTIONCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBCollectionConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger collectionType; // ivar: _collectionType
@property (readonly, nonatomic) BOOL createIfNeeded; // ivar: _createIfNeeded
@property (readonly, copy, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, nonatomic) BOOL isInMemoryDatabase;
@property (readonly, nonatomic) BOOL isReadonly; // ivar: _isReadonly
@property (nonatomic) BOOL skipsExternalNotifications; // ivar: _skipsExternalNotifications
@property (nonatomic) NSInteger storeOwner; // ivar: _storeOwner


+(id)inMemoryBookmarkCollectionConfiguration;
+(id)inMemoryTabCollectionConfiguration;
+(id)pptTabCollectionConfiguration;
+(id)readonlySafariBookmarkCollectionConfiguration;
+(id)readonlySafariTabCollectionConfiguration;
+(id)safariBookmarkCollectionConfiguration;
+(id)safariTabCollectionConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCollectionType:(NSInteger)arg0 databasePath:(id)arg1 readonly:(BOOL)arg2 ;
-(id)initWithCollectionType:(NSInteger)arg0 databasePath:(id)arg1 readonly:(BOOL)arg2 createIfNeeded:(BOOL)arg3 ;


@end


#endif