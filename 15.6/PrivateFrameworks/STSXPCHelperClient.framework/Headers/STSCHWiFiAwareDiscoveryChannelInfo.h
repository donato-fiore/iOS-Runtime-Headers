// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCHWIFIAWAREDISCOVERYCHANNELINFO_H
#define STSCHWIFIAWAREDISCOVERYCHANNELINFO_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSCHWiFiAwareDiscoveryChannelInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *channelNumber; // ivar: _channelNumber
@property (retain, nonatomic) NSNumber *operatingClass; // ivar: _operatingClass
@property (retain, nonatomic) NSNumber *supportedBands; // ivar: _supportedBands


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)asData;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSupportedBands:(id)arg0 operatingClass:(id)arg1 channelNumber:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif