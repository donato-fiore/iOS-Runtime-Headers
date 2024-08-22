// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCMSIDENTIFIER_H
#define MSCMSIDENTIFIER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MSCMSIdentifier : NSObject

@property *IssuerAndSerialNumber issuerAndSerialNumber; // ivar: _issuerAndSerialNumber
@property (retain) NSData *issuerNameData; // ivar: _issuerNameData
@property (retain) NSData *serialNumberData; // ivar: _serialNumberData
@property (retain) NSData *skidData; // ivar: _skidData
@property *heim_base_data subjectKeyId; // ivar: _subjectKeyId
@property int type; // ivar: _type


+(id)decodeIdentifier:(struct heim_base_data *)arg0 error:(*id)arg1 ;
-(id)encodeMessageSecurityObject:(*id)arg0 ;
-(id)initWithIssuerName:(id)arg0 serialNumber:(id)arg1 ;
-(id)initWithSkid:(id)arg0 ;


@end


#endif