// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACHEMANAGEMENTASSET_H
#define CACHEMANAGEMENTASSET_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface CacheManagementAsset : NSObject

@property (retain) NSString *absolutePath; // ivar: _absolutePath
@property (readonly) unsigned int assetVersion; // ivar: _assetVersion
@property CGFloat consumed_date; // ivar: _consumed_date
@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property CGFloat download_completion_date; // ivar: _download_completion_date
@property CGFloat download_start_date; // ivar: _download_start_date
@property CGFloat expiration_date; // ivar: _expiration_date
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property CGFloat last_viewed_date; // ivar: _last_viewed_date
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property int priority; // ivar: _priority
@property (retain, nonatomic) NSString *relativePath; // ivar: _relativePath
@property (retain, nonatomic) NSData *thumbnailData;


+(id)assetFromData:(id)arg0 ;
+(id)assetFromFile:(id)arg0 withIdentifier:(id)arg1 ;
+(id)assetFromPath:(id)arg0 withIdentifier:(id)arg1 ;
+(id)assetFromPath:(id)arg0 withIdentifier:(id)arg1 createIfAbsent:(BOOL)arg2 ;
+(id)assetWithRelativePath:(id)arg0 identifier:(id)arg1 expirationDate:(id)arg2 contentType:(id)arg3 metadata:(id)arg4 priority:(int)arg5 ;
-(NSInteger)size;
-(NSInteger)sizeCached:(BOOL)arg0 ;
-(id)consumedDate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)downloadCompletionDate;
-(id)downloadStartDate;
-(id)expirationDate;
-(id)fullPath;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlattenedAsset:(struct ? *)arg0 ;
-(id)initWithRelativePath:(id)arg0 identifier:(id)arg1 expirationDate:(id)arg2 contentType:(id)arg3 metadata:(id)arg4 priority:(int)arg5 ;
-(id)lastViewedDate;
-(int)purgeabilityScoreAtUrgency:(int)arg0 ;
-(struct ? *)createFlattenedAsset:(*NSInteger)arg0 ;
-(void)commit;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setConsumedDate:(id)arg0 ;
-(void)setDownloadCompletionDate:(id)arg0 ;
-(void)setDownloadStartDate:(id)arg0 ;
-(void)setExpirationDate:(id)arg0 ;
-(void)setLastViewedDate:(id)arg0 ;


@end


#endif