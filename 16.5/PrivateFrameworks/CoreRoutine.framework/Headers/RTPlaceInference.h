// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTPLACEINFERENCE_H
#define RTPLACEINFERENCE_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTMapItem.h"
#import "RTLocation.h"

@interface RTPlaceInference : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSUUID *loiIdentifier; // ivar: _loiIdentifier
@property (readonly, nonatomic) RTMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) NSUInteger placeType; // ivar: _placeType
@property (readonly, nonatomic) NSString *preferredName; // ivar: _preferredName
@property (readonly, nonatomic) RTLocation *referenceLocation; // ivar: _referenceLocation
@property (readonly, nonatomic) NSUInteger userType; // ivar: _userType
@property (readonly, nonatomic) NSUInteger userTypeSource; // ivar: _userTypeSource


+(BOOL)supportsSecureCoding;
+(id)placeTypeToString:(NSUInteger)arg0 ;
+(id)userSpecificPlaceTypeSourceToString:(NSUInteger)arg0 ;
+(id)userSpecificPlaceTypeToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPlaceInference:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 userType:(NSUInteger)arg1 userTypeSource:(NSUInteger)arg2 placeType:(NSUInteger)arg3 referenceLocation:(id)arg4 confidence:(CGFloat)arg5 loiIdentifier:(id)arg6 ;
-(id)initWithMapItem:(id)arg0 userType:(NSUInteger)arg1 userTypeSource:(NSUInteger)arg2 placeType:(NSUInteger)arg3 referenceLocation:(id)arg4 confidence:(CGFloat)arg5 loiIdentifier:(id)arg6 preferredName:(id)arg7 ;
-(id)nameFromUserType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif