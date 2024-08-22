// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCARRIER_H
#define CTCARRIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CTCarrier : NSObject

@property (nonatomic) BOOL allowsVOIP; // ivar: _allowsVOIP
@property (retain, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (retain, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (retain, nonatomic) NSString *mobileCountryCode; // ivar: _mobileCountryCode
@property (retain, nonatomic) NSString *mobileNetworkCode; // ivar: _mobileNetworkCode


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif