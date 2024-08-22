// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKEGROUPTEXTCORRECTIONRESULT_H
#define CHSTROKEGROUPTEXTCORRECTIONRESULT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHTextCorrectionResult.h"

@interface CHStrokeGroupTextCorrectionResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers; // ivar: _inputStrokeIdentifiers
@property (readonly, copy, nonatomic) CHTextCorrectionResult *textCorrectionResult; // ivar: _textCorrectionResult


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStrokeGroupTextCorrectionResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextCorrectionResult:(id)arg0 inputStrokeIdentifiers:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif