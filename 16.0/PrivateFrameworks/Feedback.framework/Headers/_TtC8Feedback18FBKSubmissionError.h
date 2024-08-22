// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8FEEDBACK18FBKSUBMISSIONERROR_H
#define _TTC8FEEDBACK18FBKSUBMISSIONERROR_H

@class NSString, NSDictionary, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8Feedback18FBKSubmissionError : NSObject <NSSecureCoding>

 {
    ? serverErrorDetails;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSDictionary *serverErrorDetails;
@property (nonatomic, retain) NSError *underlyingError; // ivar: underlyingError


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif