// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCLOUDADDREFERRAL_H
#define ICCLOUDADDREFERRAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICCloudAddReferral : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger albumAdamID; // ivar: _albumAdamID
@property (readonly, copy, nonatomic) NSString *playlistGlobalID; // ivar: _playlistGlobalID


+(BOOL)supportsSecureCoding;
+(id)referralWithAlbumAdamID:(NSInteger)arg0 ;
+(id)referralWithPlaylistGlobalID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif