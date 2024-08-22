// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPCSDIAGNOSTICINFORMATION_H
#define CKPCSDIAGNOSTICINFORMATION_H

@class NSString, NSMutableArray, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *identityInfo; // ivar: _identityInfo
@property (retain, nonatomic) NSMutableArray *notFoundZoneIDs; // ivar: _notFoundZoneIDs
@property (retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // ivar: _pcsInfoByZoneID
@property (retain, nonatomic) NSString *serviceIdentityInfo; // ivar: _serviceIdentityInfo


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif