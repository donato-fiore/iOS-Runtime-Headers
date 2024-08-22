// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKFORMFEATURE_H
#define AKFORMFEATURE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AKPageController.h"

@interface AKFormFeature : NSObject <NSCopying>



@property (weak, nonatomic) AKPageController *page; // ivar: _page
@property (nonatomic) CGRect rect; // ivar: _rect


+(id)featureWithRect:(struct CGRect )arg0 onPage:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRect:(struct CGRect )arg0 onPage:(id)arg1 ;


@end


#endif