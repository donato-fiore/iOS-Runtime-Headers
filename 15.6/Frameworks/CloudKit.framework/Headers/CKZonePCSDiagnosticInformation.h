// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKZONEPCSDIAGNOSTICINFORMATION_H
#define CKZONEPCSDIAGNOSTICINFORMATION_H

@class NSString, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *pcsDiagnosticString; // ivar: _pcsDiagnosticString
@property (retain, nonatomic) NSError *pcsError; // ivar: _pcsError
@property (nonatomic) int pcsStatus; // ivar: _pcsStatus
@property (nonatomic) BOOL wasRepaired; // ivar: _wasRepaired


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif