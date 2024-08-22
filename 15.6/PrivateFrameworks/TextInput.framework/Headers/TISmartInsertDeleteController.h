// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISMARTINSERTDELETECONTROLLER_H
#define TISMARTINSERTDELETECONTROLLER_H


#import <Foundation/Foundation.h>

#import "TITextInputTraits.h"

@interface TISmartInsertDeleteController : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) TITextInputTraits *textInputTraits; // ivar: _textInputTraits


-(NSUInteger)_numberOfCharactersInSet:(id)arg0 atBeginningOfString:(id)arg1 ;
-(NSUInteger)_numberOfCharactersInSet:(id)arg0 atEndOfString:(id)arg1 ;
-(id)initWithTextInputTraits:(id)arg0 ;
-(void)smartDeleteForDocumentState:(id)arg0 outBeforeLength:(*NSUInteger)arg1 outAfterLength:(*NSUInteger)arg2 ;
-(void)smartInsertForDocumentState:(id)arg0 stringToInsert:(id)arg1 outBeforeString:(*id)arg2 outAfterString:(*id)arg3 ;


@end


#endif