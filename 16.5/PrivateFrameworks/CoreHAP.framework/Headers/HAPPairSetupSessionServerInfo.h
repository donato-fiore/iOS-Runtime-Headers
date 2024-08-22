// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPPAIRSETUPSESSIONSERVERINFO_H
#define HAPPAIRSETUPSESSIONSERVERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HAPPairSetupSessionServerInfo : NSObject

@property (nonatomic) int maxTries; // ivar: _maxTries
@property (retain, nonatomic) NSString *productData; // ivar: _productData


-(id)initWithProductData:(id)arg0 maxTries:(int)arg1 ;


@end


#endif