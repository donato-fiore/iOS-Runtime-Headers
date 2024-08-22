// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACXAPPLICATIONSTATUS_H
#define ACXAPPLICATIONSTATUS_H

@class NSError, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ACXApplicationStatus : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger architectureCompatibility; // ivar: _architectureCompatibility
@property (nonatomic) NSUInteger installStatus; // ivar: _installStatus
@property (retain, nonatomic) NSError *lastInstallationError; // ivar: _lastInstallationError
@property (copy, nonatomic) NSString *uniqueInstallID; // ivar: _uniqueInstallID
@property (nonatomic) NSInteger watchKitCompatibility; // ivar: _watchKitCompatibility


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif