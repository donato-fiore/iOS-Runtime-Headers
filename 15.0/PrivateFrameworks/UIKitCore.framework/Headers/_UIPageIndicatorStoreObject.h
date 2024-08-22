// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPAGEINDICATORSTOREOBJECT_H
#define _UIPAGEINDICATORSTOREOBJECT_H


#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIPageIndicatorStoreObject : NSObject

@property (retain, nonatomic) UIImage *customImage; // ivar: _customImage
@property (nonatomic) NSInteger endIndex; // ivar: _endIndex
@property (nonatomic) CGSize indicatorSize; // ivar: _indicatorSize
@property (nonatomic) NSInteger startIndex; // ivar: _startIndex


-(BOOL)validPageWithinBound:(NSInteger)arg0 ;
-(id)description;
-(id)initWithImage:(id)arg0 startIndex:(NSInteger)arg1 endIndex:(NSInteger)arg2 ;
-(id)splitAtIndex:(NSInteger)arg0 withImage:(id)arg1 ;
-(void)invalidateIndicatorSize;


@end


#endif