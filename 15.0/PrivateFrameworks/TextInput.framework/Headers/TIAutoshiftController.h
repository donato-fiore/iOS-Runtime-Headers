// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIAUTOSHIFTCONTROLLER_H
#define TIAUTOSHIFTCONTROLLER_H


#import <Foundation/Foundation.h>

#import "TITextInputTraits.h"

@interface TIAutoshiftController : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) TITextInputTraits *textInputTraits; // ivar: _textInputTraits


-(BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg0 inputManagerState:(id)arg1 ;
-(NSUInteger)actionForDocumentState:(id)arg0 inputMangerState:(id)arg1 ;
-(id)initWithTextInputTraits:(id)arg0 ;


@end


#endif