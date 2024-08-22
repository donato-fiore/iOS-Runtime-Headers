// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADISPLAYPERSISTEDDATA_H
#define CADISPLAYPERSISTEDDATA_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADisplayPersistedData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *latencies; // ivar: _latencies
@property (retain, nonatomic) NSMutableArray *preferredModes; // ivar: _preferredModes
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
+(id)supportedClasses;
-(CGFloat)latencyForUUID:(id)arg0 andMode:(struct Mode )arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct Mode )preferredModeForUUID:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)save;
-(void)setLatency:(CGFloat)arg0 forUUID:(id)arg1 andMode:(struct Mode )arg2 ;
-(void)setPreferredMode:(struct Mode )arg0 forUUID:(id)arg1 ;
-(void)update;


@end


#endif