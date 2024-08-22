// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSTYLERUN_H
#define TSWPSTYLERUN_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSWPCharacterStyle.h"

@interface TSWPStyleRun : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (nonatomic) NSUInteger charIndex; // ivar: _charIndex
@property (retain, nonatomic) TSWPCharacterStyle *characterStyle; // ivar: _characterStyle
@property (nonatomic) *__CTFont ctFont; // ivar: _ctFont
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) TSWPFontHeightInfo fontHeightInfo; // ivar: _fontHeightInfo
@property (nonatomic) NSUInteger runLength; // ivar: _runLength


-(BOOL)coalesceWith:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct _NSRange )range;


@end


#endif