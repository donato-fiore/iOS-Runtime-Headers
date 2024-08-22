// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDICTATIONPHRASE_H
#define UIDICTATIONPHRASE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface UIDictationPhrase : NSObject

@property (readonly, nonatomic) NSArray *alternativeInterpretations; // ivar: _alternativeInterpretations
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(id)phraseWithText:(id)arg0 alternativeInterpretations:(id)arg1 ;
+(id)phraseWithText:(id)arg0 alternativeInterpretations:(id)arg1 style:(NSInteger)arg2 ;
-(id)description;
-(id)initWithText:(id)arg0 alternativeInterpretations:(id)arg1 style:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif