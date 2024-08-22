// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUIGRIDDIMENSION_H
#define NUIGRIDDIMENSION_H

@class NSArray, NSString;
@protocol NUIGridDimension;

#import <Foundation/Foundation.h>

#import "NUIContainerGridView.h"

@interface NUIGridDimension : NSObject <NUIGridDimension>

 {
    NUIContainerGridView *_gridView;
    NSArray *_arrangedSubviews;
    CGFloat _length;
    CGFloat _spacing;
    ? _flags;
}


@property (nonatomic) NSInteger alignment;
@property (copy, nonatomic) NSArray *arrangedSubviews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) CGFloat length;
@property (nonatomic) CGFloat spacingAfter;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif