// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHOCRTEXTLINE_H
#define PLSEARCHOCRTEXTLINE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLSearchOCRTextLine : NSObject

@property (readonly, nonatomic) NSArray *candidates; // ivar: _candidates
@property (readonly, nonatomic) BOOL isTitle; // ivar: _isTitle
@property (readonly, nonatomic) CGRect textBounds; // ivar: _textBounds


-(id)description;
-(id)initWithTextBounds:(struct CGRect )arg0 isTitle:(BOOL)arg1 candidates:(id)arg2 ;


@end


#endif