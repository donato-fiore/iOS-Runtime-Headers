// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKUNIVERSALPLAYBACKPOSITIONMETADATA_H
#define SBKUNIVERSALPLAYBACKPOSITIONMETADATA_H

@class NSString;
@protocol NSCopying, NSObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBKUniversalPlaybackPositionMetadata : NSObject <NSCopying, NSObject, NSSecureCoding>



@property (nonatomic) CGFloat bookmarkTime; // ivar: _bookmarkTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBeenPlayed; // ivar: _hasBeenPlayed
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) NSUInteger playCount; // ivar: _playCount
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)_testableMetadataItem_1;
+(id)keyValueStoreItemIdentifierForItem:(id)arg0 ;
+(id)keyValueStoreItemIdentifierForUniqueStoreID:(NSInteger)arg0 itemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3 feedURL:(id)arg4 feedGUID:(id)arg5 ;
+(id)metadataWithItemIdentifier:(id)arg0 bookmarkTime:(CGFloat)arg1 bookmarkTimestamp:(CGFloat)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(NSUInteger)arg4 ;
+(id)metadataWithItemIdentifier:(id)arg0 keyValueStorePayload:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg0 keyValueStorePayload:(id)arg1 failuresOkay:(BOOL)arg2 ;
+(id)metadataWithValuesFromDataSourceItem:(id)arg0 ;
+(id)pairWithKVSKey:(id)arg0 kvsPayload:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initAsTestableItem;
-(id)initWithCoder:(id)arg0 ;
-(id)keyValueStorePayload;
-(id)kvsKey;
-(id)kvsPayload;
-(id)kvsValueDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif