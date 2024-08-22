// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLHLSSTREAMINF_H
#define BLHLSSTREAMINF_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface BLHLSStreamInf : NSObject

@property (readonly, nonatomic) NSString *audio; // ivar: _audio
@property (readonly, nonatomic) NSUInteger averageBandwidth; // ivar: _averageBandwidth
@property (readonly, nonatomic) NSUInteger averageBandwidthFallbackToPeak;
@property (readonly, nonatomic) NSUInteger bandwidth; // ivar: _bandwidth
@property (readonly, nonatomic) NSString *codecs; // ivar: _codecs
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)description;
-(void)setPropertiesFromAttributeList:(id)arg0 ;


@end


#endif