// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3ALBUMGROUPINGIDENTIFIER_H
#define ML3ALBUMGROUPINGIDENTIFIER_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger albumArtistPersistentID; // ivar: _albumArtistPersistentID
@property (readonly, nonatomic) BOOL compilation; // ivar: _compilation
@property (readonly, nonatomic) NSString *feedURL; // ivar: _feedURL
@property (readonly, nonatomic) NSData *groupingKey; // ivar: _groupingKey
@property (readonly, nonatomic) NSData *keyValue;
@property (readonly, nonatomic) NSInteger seasonNumber; // ivar: _seasonNumber


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAlbumArtistPersistentID:(NSInteger)arg0 groupingKey:(id)arg1 feedURL:(id)arg2 seasonNumber:(NSInteger)arg3 compilation:(BOOL)arg4 ;


@end


#endif