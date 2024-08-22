// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUPPLY_H
#define PKSUPPLY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PKSupply : NSObject

@property (retain, nonatomic) NSArray *colors; // ivar: _colors
@property (nonatomic) int highLevel; // ivar: _highLevel
@property (nonatomic) int level; // ivar: _level
@property (nonatomic) int lowLevel; // ivar: _lowLevel
@property (retain, nonatomic) NSString *markerType; // ivar: _markerType
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger supplyType; // ivar: _supplyType


+(*char *)requiredIPPAttributes;
+(BOOL)isValidColorString:(char *)arg0 ;
+(NSUInteger)numRequiredIPPAttributes;
+(id)suppliesForIPPResponse:(struct _ipp_s *)arg0 ;
-(id)description;
-(id)initWithName:(char *)arg0 markerType:(char *)arg1 colors:(char *)arg2 level:(int)arg3 lowLevel:(int)arg4 highLevel:(int)arg5 ;


@end


#endif