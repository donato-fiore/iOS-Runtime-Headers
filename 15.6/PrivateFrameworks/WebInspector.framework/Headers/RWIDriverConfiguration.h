// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIDRIVERCONFIGURATION_H
#define RWIDRIVERCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RWIDriverConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *driverHost; // ivar: _driverHost
@property (copy, nonatomic) NSString *driverIdentifier; // ivar: _driverIdentifier
@property (copy, nonatomic) NSString *driverName; // ivar: _driverName
@property (nonatomic) NSInteger driverPort; // ivar: _driverPort
@property (copy, nonatomic) NSString *driverVersion; // ivar: _driverVersion


+(BOOL)isValidPayload:(id)arg0 ;
+(id)decodeFromPayload:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)encodeToPayload:(id)arg0 ;


@end


#endif