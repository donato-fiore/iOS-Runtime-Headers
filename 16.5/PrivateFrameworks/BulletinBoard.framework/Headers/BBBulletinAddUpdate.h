// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBBULLETINADDUPDATE_H
#define BBBULLETINADDUPDATE_H



#import "BBBulletinUpdate.h"

@interface BBBulletinAddUpdate : BBBulletinUpdate

@property (readonly, nonatomic) BOOL shouldPlayLightsAndSirens; // ivar: _shouldPlayLightsAndSirens


+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg0 feeds:(NSUInteger)arg1 shouldPlayLightsAndSirens:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBulletin:(id)arg0 feeds:(NSUInteger)arg1 shouldPlayLightsAndSirens:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)typeDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif