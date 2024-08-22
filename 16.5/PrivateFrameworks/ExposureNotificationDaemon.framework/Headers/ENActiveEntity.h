// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENACTIVEENTITY_H
#define ENACTIVEENTITY_H

@class ENEntity;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENActiveEntity : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) int activeStatus; // ivar: _activeStatus
@property (copy, nonatomic) ENEntity *entity; // ivar: _entity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntity:(id)arg0 activeStatus:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif