// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKGRIDIMAGEITEM_H
#define TLKGRIDIMAGEITEM_H

@class NSString, NUISizeCache;
@protocol TLKGridArrangementItem;


#import "TLKArrangementItem.h"

@interface TLKGridImageItem : TLKArrangementItem <TLKGridArrangementItem>



@property (nonatomic) _NSRange columnRange; // ivar: columnRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frame; // ivar: frame
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalCompressionResistance; // ivar: horizontalCompressionResistance
@property (nonatomic) CGFloat horizontalHuggingPriority; // ivar: horizontalHuggingPriority
@property (nonatomic) NSUInteger row; // ivar: row
@property (retain, nonatomic) NUISizeCache *sizeCache; // ivar: sizeCache
@property (readonly) Class superclass;


-(struct CGSize )sizeForTargetSize:(struct CGSize )arg0 ;


@end


#endif