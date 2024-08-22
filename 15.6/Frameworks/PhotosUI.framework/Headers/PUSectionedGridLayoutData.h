// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSECTIONEDGRIDLAYOUTDATA_H
#define PUSECTIONEDGRIDLAYOUTDATA_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PUSectionedGridLayoutData : NSObject

@property (nonatomic) CGRect currentContentBounds; // ivar: _currentContentBounds
@property (readonly, nonatomic) NSMutableArray *headerLayoutAttributes; // ivar: _headerLayoutAttributes
@property (readonly, nonatomic) NSMutableDictionary *headerLayoutAttributesByVisualSection; // ivar: _headerLayoutAttributesByVisualSection
@property (readonly, nonatomic) NSInteger numberOfPagesToCache; // ivar: _numberOfPagesToCache


-(id)init;
-(void)invalidate;


@end


#endif