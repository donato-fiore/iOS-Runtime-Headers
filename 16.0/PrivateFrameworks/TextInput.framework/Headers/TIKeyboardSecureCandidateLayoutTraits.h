// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDSECURECANDIDATELAYOUTTRAITS_H
#define TIKEYBOARDSECURECANDIDATELAYOUTTRAITS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardSecureCandidateTextTraits.h"

@interface TIKeyboardSecureCandidateLayoutTraits : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL forceSingleLineLayout; // ivar: _forceSingleLineLayout
@property (nonatomic) unsigned int headerInliningBehavior; // ivar: _headerInliningBehavior
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInFirstLine; // ivar: _headerTraitsInFirstLine
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInOnlyLine; // ivar: _headerTraitsInOnlyLine
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInFirstAndSecondLines; // ivar: _inputTraitsInFirstAndSecondLines
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInOnlyLine; // ivar: _inputTraitsInOnlyLine
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInSecondLine; // ivar: _inputTraitsInSecondLine


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif