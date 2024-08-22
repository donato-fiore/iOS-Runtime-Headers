// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENADVERTISEMENTMETADATA_H
#define ENADVERTISEMENTMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ENAdvertisementMetadata : NSObject

@property (readonly, nonatomic) unsigned char calibrationConfidence; // ivar: _calibrationConfidence
@property (readonly, nonatomic) char txPower; // ivar: _txPower
@property (readonly, nonatomic) NSInteger version; // ivar: _version
@property (readonly, copy, nonatomic) NSString *versionString;


-(id)initWithVersion:(NSInteger)arg0 txPower:(char)arg1 calibrationConfidence:(unsigned char)arg2 ;
-(unsigned char)attenuationForRSSI:(char)arg0 saturated:(BOOL)arg1 ;


@end


#endif