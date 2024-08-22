// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCATIONOFINTEREST_H
#define ATXLOCATIONOFINTEREST_H

@class NSUUID, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXLocationOfInterest : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSArray *visits; // ivar: _visits


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 visits:(id)arg1 coordinate:(struct CLLocationCoordinate2D )arg2 ;
-(id)initWithUUID:(id)arg0 visits:(id)arg1 coordinate:(struct CLLocationCoordinate2D )arg2 type:(NSInteger)arg3 ;
-(void)addVisitFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif