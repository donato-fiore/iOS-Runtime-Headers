// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNGUIDANCELANEINFO_H
#define MNGUIDANCELANEINFO_H

@class NSArray, NSUUID, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int composedGuidanceEventIndex; // ivar: _composedGuidanceEventIndex
@property (readonly, nonatomic) NSInteger distanceDetailLevel; // ivar: _distanceDetailLevel
@property (readonly, nonatomic) NSArray *instructions; // ivar: _instructions
@property (readonly, nonatomic) BOOL isForManeuver; // ivar: _isForManeuver
@property (readonly, nonatomic) NSArray *lanes; // ivar: _lanes
@property (readonly, nonatomic) NSArray *titles; // ivar: _titles
@property (readonly, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic) NSDictionary *variableOverrides; // ivar: _variableOverrides


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 isForManeuver:(BOOL)arg1 lanes:(id)arg2 titles:(id)arg3 instructions:(id)arg4 variableOverrides:(id)arg5 distanceDetailLevel:(NSInteger)arg6 composedGuidanceEventIndex:(int)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif