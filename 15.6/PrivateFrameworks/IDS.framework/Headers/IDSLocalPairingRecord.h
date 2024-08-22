// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSLOCALPAIRINGRECORD_H
#define IDSLOCALPAIRINGRECORD_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSLocalPairingRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *protectionClassIdentityDataMap; // ivar: _protectionClassIdentityDataMap


+(BOOL)supportsSecureCoding;
-(id)identityDataForDataProtectionClass:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentityDataClassA:(id)arg0 classC:(id)arg1 classD:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif