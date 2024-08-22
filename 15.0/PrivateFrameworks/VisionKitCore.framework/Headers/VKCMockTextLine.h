// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCMOCKTEXTLINE_H
#define VKCMOCKTEXTLINE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "VKQuad.h"

@interface VKCMockTextLine : NSObject

@property (retain, nonatomic) VKQuad *quad; // ivar: _quad
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSArray *words; // ivar: _words


-(id)initWithWordsArray:(id)arg0 startingIndex:(NSUInteger)arg1 ;
-(void)loadWordsArrayFromWords:(id)arg0 startingIndex:(NSUInteger)arg1 ;


@end


#endif