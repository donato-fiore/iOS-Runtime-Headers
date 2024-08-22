// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPCHARINDEXPLACEMENTINDEX_H
#define TSWPCHARINDEXPLACEMENTINDEX_H


#import <Foundation/Foundation.h>

#import "TSWPDrawableAttachment.h"

@interface TSWPCharIndexPlacementIndex : NSObject

@property (nonatomic) NSUInteger charIndex; // ivar: _charIndex
@property (retain, nonatomic) TSWPDrawableAttachment *drawableAttachment; // ivar: _drawableAttachment
@property (nonatomic) int placementIndex; // ivar: _placementIndex


-(NSInteger)compare:(id)arg0 ;
-(id)initWithCharIndex:(NSUInteger)arg0 placmentIndex:(int)arg1 drawableAttachment:(id)arg2 ;


@end


#endif