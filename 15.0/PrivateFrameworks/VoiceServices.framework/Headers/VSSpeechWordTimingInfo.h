// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSPEECHWORDTIMINGINFO_H
#define VSSPEECHWORDTIMINGINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) _NSRange textRange; // ivar: _textRange


+(BOOL)supportsSecureCoding;
+(NSUInteger)extraBytesFromUTF8ToUTF16With:(char *)arg0 totalLength:(NSUInteger)arg1 begin:(NSUInteger)arg2 end:(NSUInteger)arg3 ;
+(id)utf16TimingInfoWithUTF8Range:(id)arg0 withText:(id)arg1 ;
+(id)wordTimingInfoFrom:(id)arg0 timestamps:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif