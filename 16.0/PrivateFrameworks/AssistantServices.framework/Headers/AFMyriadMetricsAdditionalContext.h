// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMYRIADMETRICSADDITIONALCONTEXT_H
#define AFMYRIADMETRICSADDITIONALCONTEXT_H


#import <Foundation/Foundation.h>


@interface AFMyriadMetricsAdditionalContext : NSObject

@property (readonly, nonatomic) unsigned char deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) unsigned char deviceProductType; // ivar: _deviceProductType
@property (readonly, nonatomic) unsigned char goodnessScore; // ivar: _goodnessScore
@property (readonly, nonatomic) unsigned char rawGoodnessScore; // ivar: _rawGoodnessScore


-(id)description;
-(id)initWithRawGoodnessScore:(unsigned char)arg0 goodnessScore:(unsigned char)arg1 deviceClass:(unsigned char)arg2 deviceProductType:(unsigned char)arg3 ;


@end


#endif