// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPSUPERBINARYASSETTLV_H
#define UARPSUPERBINARYASSETTLV_H

@class NSURL, NSData, NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>

#import "UARPAssetVersion.h"

@interface UARPSuperBinaryAssetTLV : NSObject {
    NSURL *_url;
    NSData *_data;
    NSString *_string;
    unsigned char _val8;
    unsigned short _val16;
    unsigned int _val32;
    NSUInteger _val64;
    UARPVersion _version;
    int _valueType;
    uarpPayloadVersionInfo _versionInfo;
}


@property (readonly) NSUInteger type; // ivar: _type
@property (readonly) NSData *valueAsData;
@property (readonly) NSNumber *valueAsNumber;
@property (readonly) NSString *valueAsString;
@property (readonly) NSArray *valueAsTLVs;
@property (readonly) UARPAssetVersion *valueAsVersion;


+(id)decomposeTLVs:(id)arg0 ;
+(id)findTLVWithType:(NSUInteger)arg0 tlvs:(id)arg1 ;
+(id)findTLVsWithType:(NSUInteger)arg0 tlvs:(id)arg1 ;
-(id)description;
-(id)generateTLV:(*id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 dataValue:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 stringValue:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 tagValue:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 tlvLength:(NSUInteger)arg1 tlvValue:(*void)arg2 ;
-(id)initWithType:(NSUInteger)arg0 unsignedInt16:(unsigned short)arg1 ;
-(id)initWithType:(NSUInteger)arg0 unsignedInt32:(unsigned int)arg1 ;
-(id)initWithType:(NSUInteger)arg0 unsignedInt64:(NSUInteger)arg1 ;
-(id)initWithType:(NSUInteger)arg0 unsignedInt8:(unsigned char)arg1 ;
-(id)initWithType:(NSUInteger)arg0 urlValue:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 version:(struct UARPVersion *)arg1 ;
-(id)initWithType:(NSUInteger)arg0 versionInfo:(struct uarpPayloadVersionInfo *)arg1 ;


@end


#endif