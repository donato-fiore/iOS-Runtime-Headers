// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HFITEMUPDATEREQUESTCONTEXT_H
#define _HFITEMUPDATEREQUESTCONTEXT_H

@class NSDictionary;
@protocol NSCopying, HFCharacteristicReadPolicy;

#import <Foundation/Foundation.h>

#import "HFUpdateLogger.h"

@interface _HFItemUpdateRequestContext : NSObject <NSCopying>



@property (retain, nonatomic) HFUpdateLogger *logger; // ivar: _logger
@property (retain, nonatomic) NSObject<HFCharacteristicReadPolicy> *readPolicy; // ivar: _readPolicy
@property (nonatomic) SEL senderSelector; // ivar: _senderSelector
@property (copy, nonatomic) NSDictionary *updateOptions; // ivar: _updateOptions


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif