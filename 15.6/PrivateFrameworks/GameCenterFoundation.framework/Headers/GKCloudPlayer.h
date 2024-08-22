// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCLOUDPLAYER_H
#define GKCLOUDPLAYER_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "GKBasePlayer.h"

@interface GKCloudPlayer : GKBasePlayer <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(void)getCurrentSignedInPlayerForContainer:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)playerID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif