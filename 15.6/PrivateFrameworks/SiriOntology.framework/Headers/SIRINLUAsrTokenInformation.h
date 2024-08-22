// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUASRTOKENINFORMATION_H
#define SIRINLUASRTOKENINFORMATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLUAsrTokenInformation : NSObject <NSSecureCoding>



@property (nonatomic) BOOL addSpaceAfter; // ivar: _addSpaceAfter
@property (nonatomic) unsigned int beginIndex; // ivar: _beginIndex
@property (nonatomic) CGFloat confidenceScore; // ivar: _confidenceScore
@property (nonatomic) unsigned int endIndex; // ivar: _endIndex
@property (nonatomic) int endMilliSeconds; // ivar: _endMilliSeconds
@property (retain, nonatomic) NSString *ipaPhoneSequence; // ivar: _ipaPhoneSequence
@property (retain, nonatomic) NSString *phoneSequence; // ivar: _phoneSequence
@property (retain, nonatomic) NSString *postITNText; // ivar: _postITNText
@property (nonatomic) BOOL removeSpaceAfter; // ivar: _removeSpaceAfter
@property (nonatomic) BOOL removeSpaceBefore; // ivar: _removeSpaceBefore
@property (nonatomic) int startMilliSeconds; // ivar: _startMilliSeconds


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPostITNText:(id)arg0 phoneSequence:(id)arg1 ipaPhoneSequence:(id)arg2 addSpaceAfter:(BOOL)arg3 removeSpaceAfter:(BOOL)arg4 removeSpaceBefore:(BOOL)arg5 confidenceScore:(CGFloat)arg6 beginIndex:(unsigned int)arg7 endIndex:(unsigned int)arg8 ;
-(id)initWithPostITNText:(id)arg0 phoneSequence:(id)arg1 ipaPhoneSequence:(id)arg2 addSpaceAfter:(BOOL)arg3 removeSpaceAfter:(BOOL)arg4 removeSpaceBefore:(BOOL)arg5 confidenceScore:(CGFloat)arg6 beginIndex:(unsigned int)arg7 endIndex:(unsigned int)arg8 startMilliSeconds:(int)arg9 endMilliSeconds:(int)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif