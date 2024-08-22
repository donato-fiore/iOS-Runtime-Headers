// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCRESOURCE_H
#define FCRESOURCE_H

@class NSDate, NSURL, NSString, NTPBResourceRecord;
@protocol FCContentArchivable;

#import <Foundation/Foundation.h>

#import "FCAssetHandle.h"
#import "FCContentArchive.h"
#import "FCInterestToken.h"

@interface FCResource : NSObject <FCContentArchivable>



@property (readonly, nonatomic) FCAssetHandle *assetHandle; // ivar: _assetHandle
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) NSDate *fetchDate; // ivar: _fetchDate
@property (readonly, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) FCInterestToken *interestToken; // ivar: _interestToken
@property (readonly, nonatomic, getter=isOnDisk) BOOL onDisk;
@property (readonly, nonatomic) NSString *resourceID; // ivar: _resourceID
@property (retain, nonatomic) NTPBResourceRecord *resourceRecord; // ivar: _resourceRecord


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPermanentURLForResourceID:(id)arg0 cacheLifetimeHint:(NSInteger)arg1 contentContext:(id)arg2 ;
-(id)initWithRecord:(id)arg0 interestToken:(id)arg1 assetManager:(id)arg2 ;
-(id)initWithResourceID:(id)arg0 assetHandle:(id)arg1 fetchDate:(id)arg2 ;


@end


#endif