// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPRODUCTSUBSCRIPTIONPERIOD_H
#define SKPRODUCTSUBSCRIPTIONPERIOD_H


#import <Foundation/Foundation.h>


@interface SKProductSubscriptionPeriod : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) NSUInteger numberOfUnits;
@property (readonly, nonatomic) NSUInteger unit;


-(id)copyXPCEncoding;
-(id)init;
-(id)initWithISO8601String:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif