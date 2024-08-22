// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSIMPLEBEACONCONTEXT_H
#define SPSIMPLEBEACONCONTEXT_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPSimpleBeaconContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSUInteger fetchProperties; // ivar: _fetchProperties
@property (copy, nonatomic) NSArray *filterBeaconUUIDs; // ivar: _filterBeaconUUIDs
@property (nonatomic) BOOL sendInitialBeacons; // ivar: _sendInitialBeacons


+(BOOL)supportsSecureCoding;
+(id)defaultContext;
+(id)deviceManagerContext;
+(id)fmipItemContext;
+(id)fmipItemContextForBeaconUUIDs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFetchProperties:(NSUInteger)arg0 filterBeaconUUIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif