// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSDIAGNOSTICENVIRONMENTDATESPECIFIER_H
#define BLSDIAGNOSTICENVIRONMENTDATESPECIFIER_H

@class NSString;
@protocol BLSEnvironmentDateSpecifying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "BLSAlwaysOnDateSpecifier.h"

@interface BLSDiagnosticEnvironmentDateSpecifier : NSObject <BLSEnvironmentDateSpecifying, NSSecureCoding, BSXPCCoding>



@property (readonly, nonatomic) BLSAlwaysOnDateSpecifier *dateSpecifier; // ivar: _dateSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *environmentIdentifier; // ivar: _environmentIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)createWithSpecifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateSpecifier:(id)arg0 environmentIdentifier:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif