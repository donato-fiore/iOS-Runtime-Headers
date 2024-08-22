// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMATTRIBUTEDSTRINGRENDEREROPTIONS_H
#define FMATTRIBUTEDSTRINGRENDEREROPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FMAttributedStringRendererOptions : NSObject

@property (readonly, copy, nonatomic) NSArray *exclusionPaths; // ivar: _exclusionPaths
@property (readonly, nonatomic) CGFloat hyphenationFactor; // ivar: _hyphenationFactor
@property (readonly, nonatomic) NSInteger lineBreakMode; // ivar: _lineBreakMode
@property (readonly, nonatomic) CGFloat lineFragmentPadding; // ivar: _lineFragmentPadding
@property (readonly, nonatomic) NSUInteger maximumNumberOfLines; // ivar: _maximumNumberOfLines


-(id)init;
-(id)initWithLineBreakMode:(NSInteger)arg0 lineFragmentPadding:(CGFloat)arg1 maximumNumberOfLines:(NSUInteger)arg2 hyphenationFactor:(CGFloat)arg3 exclusionPaths:(id)arg4 ;


@end


#endif