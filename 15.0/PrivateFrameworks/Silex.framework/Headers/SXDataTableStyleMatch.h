// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLESTYLEMATCH_H
#define SXDATATABLESTYLEMATCH_H


#import <Foundation/Foundation.h>

#import "SXJSONDataTableSelector.h"
#import "SXDataTableElementStyle.h"

@interface SXDataTableStyleMatch : NSObject

@property (readonly, nonatomic) SXJSONDataTableSelector *selector; // ivar: _selector
@property (readonly, nonatomic) SXDataTableElementStyle *style; // ivar: _style


+(id)matchWithStyle:(id)arg0 andSelector:(id)arg1 ;
-(id)initWithStyle:(id)arg0 andSelector:(id)arg1 ;


@end


#endif