// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDATEVIEWCOMPONENT_H
#define CSDATEVIEWCOMPONENT_H

@class NSNumber;


#import "CSComponent.h"

@interface CSDateViewComponent : CSComponent

@property (nonatomic) BOOL hidesTime;
@property (nonatomic) NSNumber *pageIndex;
@property (nonatomic) BOOL stretch; // ivar: _stretch
@property (nonatomic) NSInteger vibrantAndCentered;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hidesTime:(BOOL)arg0 ;
-(id)init;
-(id)pageIndex:(id)arg0 ;
-(id)vibrantAndCentered:(NSInteger)arg0 ;


@end


#endif