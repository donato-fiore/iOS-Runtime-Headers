// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADISCOVERYCONFIGURATION_H
#define DADISCOVERYCONFIGURATION_H

@class NSArray, NSString;
@protocol CUXPCCodable, NSCopying;

#import <Foundation/Foundation.h>


@interface DADiscoveryConfiguration : NSObject <CUXPCCodable, NSCopying>



@property (copy, nonatomic) NSArray *bluetoothCompanyIdentifiers; // ivar: _bluetoothCompanyIdentifiers
@property (copy, nonatomic) NSArray *bluetoothServices; // ivar: _bluetoothServices
@property (copy, nonatomic) NSArray *bonjourServiceTypes; // ivar: _bonjourServiceTypes
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) BOOL presenceOnly; // ivar: _presenceOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif