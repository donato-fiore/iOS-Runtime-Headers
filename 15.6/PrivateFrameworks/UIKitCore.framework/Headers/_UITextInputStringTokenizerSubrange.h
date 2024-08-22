// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTINPUTSTRINGTOKENIZERSUBRANGE_H
#define _UITEXTINPUTSTRINGTOKENIZERSUBRANGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UITextPosition.h"

@interface _UITextInputStringTokenizerSubrange : NSObject

@property (readonly, nonatomic) UITextPosition *basePosition; // ivar: _basePosition
@property (nonatomic) NSInteger indexOfBase; // ivar: _indexOfBase
@property (nonatomic) _NSRange relevantRange; // ivar: _relevantRange
@property (readonly, nonatomic) NSString *substring; // ivar: _substring


+(id)subrangeWithSubstring:(id)arg0 basePosition:(id)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif