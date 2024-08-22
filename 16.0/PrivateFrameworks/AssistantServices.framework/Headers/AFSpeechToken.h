// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEECHTOKEN_H
#define AFSPEECHTOKEN_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechToken : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger confidenceScore; // ivar: _confidenceScore
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (copy, nonatomic) NSString *ipaPhoneSequence; // ivar: _ipaPhoneSequence
@property (copy, nonatomic) NSString *phoneSequence; // ivar: _phoneSequence
@property (nonatomic) BOOL removeSpaceAfter; // ivar: _removeSpaceAfter
@property (nonatomic) BOOL removeSpaceBefore; // ivar: _removeSpaceBefore
@property (nonatomic) CGFloat silenceStartTime; // ivar: _silenceStartTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)aceToken;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif