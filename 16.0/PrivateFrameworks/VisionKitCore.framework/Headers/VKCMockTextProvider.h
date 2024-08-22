// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCMOCKTEXTPROVIDER_H
#define VKCMOCKTEXTPROVIDER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface VKCMockTextProvider : NSObject

@property (nonatomic) BOOL isRunningTest; // ivar: _isRunningTest
@property (retain, nonatomic) NSMutableArray *lines; // ivar: _lines
@property (retain, nonatomic) NSString *text; // ivar: _text


-(id)adjustTextRangeToSelectableRange:(id)arg0 ;
-(id)allLineQuads;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)lineForIndex:(NSUInteger)arg0 ;
-(id)rangeOfLineForPosition:(id)arg0 ;
-(id)rangeOfWordForPosition:(id)arg0 ;
-(id)selectionRectsForRange:(id)arg0 documentView:(id)arg1 contentRect:(struct CGRect )arg2 ;
-(id)smallestSelectableRangeForPosition:(id)arg0 ;
-(id)wordForIndex:(NSUInteger)arg0 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 documentView:(id)arg1 contentRect:(struct CGRect )arg2 ;
-(void)loadInfoFromDictionary:(id)arg0 ;


@end


#endif