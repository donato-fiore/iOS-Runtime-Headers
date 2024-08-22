// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIINPUTVIEWKEYBOARDOUTPUT_H
#define _UIINPUTVIEWKEYBOARDOUTPUT_H

@class TIKeyboardOutput;
@protocol NSCopying, NSSecureCoding;



@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL didBeginOutput; // ivar: _didBeginOutput
@property (nonatomic) NSInteger positionOffset; // ivar: _positionOffset


+(BOOL)supportsSecureCoding;
+(id)outputWithKeyboardOutput:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAcceptedCandidate:(id)arg0 ;
-(void)setForwardDeletionCount:(NSUInteger)arg0 ;
-(void)setHandwritingStrokesToDelete:(id)arg0 ;
-(void)setInsertionTextAfterSelection:(id)arg0 ;
-(void)setShortcutConversion:(id)arg0 ;
-(void)setTextToCommit:(id)arg0 ;


@end


#endif