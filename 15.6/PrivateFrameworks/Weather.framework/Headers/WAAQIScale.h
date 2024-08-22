// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WAAQISCALE_H
#define WAAQISCALE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "WAAQIGradient.h"

@interface WAAQIScale : NSObject

@property (copy, nonatomic) NSMutableArray *categories; // ivar: _categories
@property (readonly, nonatomic) WAAQIGradient *gradient; // ivar: _gradient
@property (readonly, nonatomic) _NSRange range; // ivar: _range


+(id)scaleFromFoundationScale:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(void)addCategory:(id)arg0 ;


@end


#endif