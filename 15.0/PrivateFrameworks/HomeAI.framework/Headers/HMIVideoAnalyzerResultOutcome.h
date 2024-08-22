// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERRESULTOUTCOME_H
#define HMIVIDEOANALYZERRESULTOUTCOME_H

@class HMFObject, NSString;
@protocol NSSecureCoding;



@interface HMIVideoAnalyzerResultOutcome : HMFObject <NSSecureCoding>



@property (readonly) NSUInteger code; // ivar: _code
@property (readonly) BOOL isSkipped;
@property (readonly) BOOL isSuccess;
@property (readonly) NSString *message; // ivar: _message


+(BOOL)supportsSecureCoding;
+(id)skipped;
+(id)success;
-(id)description;
-(id)initWithCode:(NSUInteger)arg0 message:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif