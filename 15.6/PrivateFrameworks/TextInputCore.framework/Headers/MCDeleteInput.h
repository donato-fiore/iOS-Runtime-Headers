// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCDELETEINPUT_H
#define MCDELETEINPUT_H

@class NSString;


#import "MCKeyboardInput.h"

@interface MCDeleteInput : MCKeyboardInput

@property (readonly, nonatomic) BOOL deleteBySyllable; // ivar: _deleteBySyllable
@property (readonly, nonatomic) NSString *deletedText; // ivar: _deletedText
@property (readonly, nonatomic) BOOL shouldDeleteAcceptCandidateInput; // ivar: _shouldDeleteAcceptCandidateInput


-(BOOL)canComposeNew:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDeletedText:(id)arg0 deleteBySyllable:(BOOL)arg1 shouldDeleteAcceptCandidateInput:(BOOL)arg2 ;


@end


#endif