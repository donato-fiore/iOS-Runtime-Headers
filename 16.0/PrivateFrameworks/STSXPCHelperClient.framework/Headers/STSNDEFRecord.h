// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSNDEFRECORD_H
#define STSNDEFRECORD_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSNDEFRecord : NSObject <NSSecureCoding>

 {
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}


@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;


+(BOOL)_parseNDEFData:(id)arg0 outRecords:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)ndefRecordsWithData:(id)arg0 ;
+(id)recordsWithTNF:(unsigned char)arg0 type:(id)arg1 identifier:(id)arg2 payload:(id)arg3 chunkSize:(NSUInteger)arg4 outError:(*NSUInteger)arg5 ;
-(BOOL)_idLengthPresent;
-(BOOL)chunked;
-(BOOL)isAlternativeCarrierRecord;
-(BOOL)isBluetoothLEConfigurationRecord;
-(BOOL)isCollisionResolutionRecord;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHandoverRequestRecord;
-(BOOL)isHandoverSelectErrorRecord;
-(BOOL)isHandoverSelectRecord;
-(BOOL)isISO18013DeviceEngagementRecord;
-(BOOL)isISO18013ReaderEngagementRecord;
-(BOOL)isNfcConfigurationRecord;
-(BOOL)isWiFiAwareConfigurationRecord;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)shortRecord;
-(NSUInteger)getCarrierPowerStateFromAlternativeCarrierRecord;
-(id)description;
-(id)getAuxiliaryDataReferencesFromAlternativeCarrierRecord;
-(id)getCarrierDataReferenceFromAlternativeCarrierRecord;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(unsigned char)arg0 type:(id)arg1 identifier:(id)arg2 payload:(id)arg3 ;
-(unsigned char)header;
-(void)_setIdLengthPresent:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setChunked:(BOOL)arg0 ;
-(void)setHeader:(unsigned char)arg0 ;
-(void)setMessageBegin:(BOOL)arg0 ;
-(void)setMessageEnd:(BOOL)arg0 ;
-(void)setShortRecord:(BOOL)arg0 ;


@end


#endif