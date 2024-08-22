// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBBULLETINREMOVEUPDATE_H
#define BBBULLETINREMOVEUPDATE_H



#import "BBBulletinUpdate.h"

@interface BBBulletinRemoveUpdate : BBBulletinUpdate

@property (readonly, nonatomic) BOOL shouldSync; // ivar: _shouldSync


+(BOOL)supportsSecureCoding;
+(id)updateWithBulletin:(id)arg0 feeds:(NSUInteger)arg1 shouldSync:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBulletin:(id)arg0 feeds:(NSUInteger)arg1 shouldSync:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)typeDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif