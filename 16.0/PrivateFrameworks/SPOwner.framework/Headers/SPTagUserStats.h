// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPTAGUSERSTATS_H
#define SPTAGUSERSTATS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPTagUserStats : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned char crashCount; // ivar: _crashCount
@property (nonatomic) unsigned short multiTime; // ivar: _multiTime
@property (nonatomic) unsigned short nearOwnerTime; // ivar: _nearOwnerTime
@property (nonatomic) unsigned char overflowFlag; // ivar: _overflowFlag
@property (nonatomic) unsigned short ownerPlaySoundCount; // ivar: _ownerPlaySoundCount
@property (nonatomic) unsigned short ownerPlaySoundTime; // ivar: _ownerPlaySoundTime
@property (nonatomic) unsigned short rangingCount; // ivar: _rangingCount
@property (nonatomic) unsigned short rangingTime; // ivar: _rangingTime
@property (nonatomic) unsigned short wildTime; // ivar: _wildTime


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif