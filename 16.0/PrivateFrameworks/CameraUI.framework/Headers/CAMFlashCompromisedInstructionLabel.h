// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFLASHCOMPROMISEDINSTRUCTIONLABEL_H
#define CAMFLASHCOMPROMISEDINSTRUCTIONLABEL_H



#import "CAMInstructionLabel.h"

@interface CAMFlashCompromisedInstructionLabel : CAMInstructionLabel

@property (nonatomic) NSUInteger compromise; // ivar: _compromise


+(BOOL)shouldDisplayInstructionForCompromise:(NSUInteger)arg0 ;
+(id)_textForCompromise:(NSUInteger)arg0 ;
-(id)_symbolPrefixName;
-(id)_textColor;
-(void)_updateTextWithPriorCompromise:(NSUInteger)arg0 ;


@end


#endif