// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVPLAYACTIVITYEVENTCONTAINERIDS_H
#define SSVPLAYACTIVITYEVENTCONTAINERIDS_H

@class NSString;
@protocol NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSVPlayActivityEventContainerIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger adamID; // ivar: _adamID
@property (readonly, copy, nonatomic) NSString *cloudAlbumID; // ivar: _cloudAlbumID
@property (readonly, nonatomic) NSUInteger cloudPlaylistID; // ivar: _cloudPlaylistID
@property (readonly, copy, nonatomic) NSString *globalPlaylistID; // ivar: _globalPlaylistID
@property (readonly, copy, nonatomic) NSString *playlistVersionHash; // ivar: _playlistVersionHash
@property (readonly, copy, nonatomic) NSString *stationHash; // ivar: _stationHash
@property (readonly, nonatomic) NSInteger stationID; // ivar: _stationID
@property (readonly, copy, nonatomic) NSString *stationStringID; // ivar: _stationStringID


+(BOOL)supportsSecureCoding;
-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif