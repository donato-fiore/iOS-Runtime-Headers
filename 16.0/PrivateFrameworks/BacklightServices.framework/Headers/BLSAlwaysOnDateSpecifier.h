// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSALWAYSONDATESPECIFIER_H
#define BLSALWAYSONDATESPECIFIER_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface BLSAlwaysOnDateSpecifier : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fidelity; // ivar: _fidelity
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *userObject; // ivar: _userObject


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 fidelity:(NSInteger)arg1 ;
-(id)initWithDate:(id)arg0 fidelity:(NSInteger)arg1 userObject:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)newSpecifierWithMaxFidelity:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif