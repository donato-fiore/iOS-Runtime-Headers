// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDICTATIONINTERPRETATIONGROUP_H
#define UIDICTATIONINTERPRETATIONGROUP_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIDictationInterpretation.h"

@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat bestConfidenceScore;
@property (readonly, nonatomic) UIDictationInterpretation *bestInterpretation;
@property (readonly, nonatomic) NSArray *interpretations; // ivar: _interpretations
@property (readonly, nonatomic) BOOL isLowConfidence; // ivar: _isLowConfidence


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterpretations:(id)arg0 ;
-(id)initWithInterpretations:(id)arg0 isLowConfidence:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif