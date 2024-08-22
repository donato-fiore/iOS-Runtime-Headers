// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUUIDDATA_H
#define PFUUIDDATA_H

@class NSData, NSString;



@interface PFUuidData : NSData {
    unsigned char _uuid;
}


@property (readonly, nonatomic) NSString *canonicalStringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL isNull;
@property (readonly, nonatomic) NSString *mercuryStringValue;


+(BOOL)isCanonicalUuidString:(id)arg0 ;
+(BOOL)isMercuryBase64String:(id)arg0 ;
+(BOOL)isMercuryUuidString:(id)arg0 ;
+(BOOL)isSupportedUuidString:(id)arg0 ;
+(id)generateUuidAsCanonicalString;
+(id)generateUuidAsMercuryString;
+(id)hostUuid;
+(id)nullUuid;
+(id)randomUuid;
+(id)uuidWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)uuidWithData:(id)arg0 ;
+(id)uuidWithString:(id)arg0 ;
-(*void)bytes;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToData:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)description;
-(id)init;
-(id)initNull;
-(id)initRandom;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMercuryBase64String:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif