// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPCONFIGURATIONSIGNATUREINFO_H
#define NSPCONFIGURATIONSIGNATUREINFO_H

@class NSArray, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPConfigurationSignatureInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *certificates; // ivar: _certificates
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (nonatomic) NSUInteger signatureAlgorithm; // ivar: _signatureAlgorithm


+(BOOL)supportsSecureCoding;
+(void)removeFromPreferences;
-(BOOL)saveToPreferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromPreferences;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif