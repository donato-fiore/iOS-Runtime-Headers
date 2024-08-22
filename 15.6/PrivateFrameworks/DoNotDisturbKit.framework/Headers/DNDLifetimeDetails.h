// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDLIFETIMEDETAILS_H
#define DNDLIFETIMEDETAILS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDLifetimeDetails : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)lifetimeDetailsForEvent:(id)arg0 relativeToDate:(id)arg1 ;
+(id)lifetimeDetailsForOneHour;
+(id)lifetimeDetailsForPlaceInference:(id)arg0 ;
+(id)lifetimeDetailsUntilEvening;
+(id)lifetimeDetailsUntilMorning;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 metadata:(id)arg2 ;


@end


#endif