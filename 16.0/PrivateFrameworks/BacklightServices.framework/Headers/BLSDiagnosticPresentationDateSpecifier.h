// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSDIAGNOSTICPRESENTATIONDATESPECIFIER_H
#define BLSDIAGNOSTICPRESENTATIONDATESPECIFIER_H

@class NSArray, NSString, NSDate;
@protocol BLSPresentationDateSpecifying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface BLSDiagnosticPresentationDateSpecifier : NSObject <BLSPresentationDateSpecifying, NSSecureCoding, BSXPCCoding>

 {
    NSArray *_specifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *presentationDate; // ivar: _presentationDate
@property (readonly, nonatomic) NSArray *specifiers;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)createWithSpecifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPresentationDate:(id)arg0 specifiers:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif