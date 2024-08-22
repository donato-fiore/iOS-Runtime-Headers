// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTEXTCORRECTIONRESULT_H
#define CHTEXTCORRECTIONRESULT_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHTextInputTarget.h"
#import "CHTokenizedTextResult.h"

@interface CHTextCorrectionResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) _NSRange affectedRange; // ivar: _affectedRange
@property (readonly, nonatomic, getter=isCharacterLevel) BOOL characterLevel; // ivar: _characterLevel
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CHTextInputTarget *inputTarget; // ivar: _inputTarget
@property (readonly, nonatomic) NSInteger resultType; // ivar: _resultType
@property (readonly, nonatomic) CHTokenizedTextResult *textResult; // ivar: _textResult


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextCorrectionResult:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputTarget:(id)arg0 affectedRange:(struct _NSRange )arg1 textResult:(id)arg2 resultType:(NSInteger)arg3 isCharacterLevel:(BOOL)arg4 error:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif