// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENADVERTISEMENT_H
#define ENADVERTISEMENT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ENAdvertisement : NSObject

@property (nonatomic) unsigned char counter; // ivar: _counter
@property (retain, nonatomic) NSData *encryptedAEM; // ivar: _encryptedAEM
@property (nonatomic) char maxRSSI; // ivar: _maxRSSI
@property (retain, nonatomic) NSData *rpi; // ivar: _rpi
@property (nonatomic) BOOL saturated; // ivar: _saturated
@property (nonatomic) unsigned short scanInterval; // ivar: _scanInterval
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) char typicalRSSI; // ivar: _typicalRSSI


+(id)decryptedMetadataForTemporaryExposureKey:(id)arg0 encryptedAEM:(struct ? *)arg1 RPI:(struct ? *)arg2 ;
-(id)decryptedMetadataForTemporaryExposureKey:(id)arg0 ;
-(id)description;
-(id)initWithRPI:(id)arg0 encryptedAEM:(id)arg1 timestamp:(CGFloat)arg2 scanInterval:(unsigned short)arg3 typicalRSSI:(char)arg4 maxRSSI:(char)arg5 saturated:(BOOL)arg6 counter:(unsigned char)arg7 ;
-(id)initWithStructRepresentation:(struct ? )arg0 ;
-(struct ? )structRepresentation;
-(void)combineWithAdvertisement:(id)arg0 ;


@end


#endif