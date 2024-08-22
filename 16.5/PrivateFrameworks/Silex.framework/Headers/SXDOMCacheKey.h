// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDOMCACHEKEY_H
#define SXDOMCACHEKEY_H

@protocol NSCopying, SXConditionHints;

#import <Foundation/Foundation.h>

#import "SXLayoutOptions.h"

@interface SXDOMCacheKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<SXConditionHints> *hints; // ivar: _hints
@property (readonly, nonatomic) SXLayoutOptions *options; // ivar: _options


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLayoutOptions:(id)arg0 hints:(id)arg1 ;


@end


#endif