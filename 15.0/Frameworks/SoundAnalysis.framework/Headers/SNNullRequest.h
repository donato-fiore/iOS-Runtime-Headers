// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNNULLREQUEST_H
#define SNNULLREQUEST_H

@class NSString;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>

#import "SNNullDetector.h"

@interface SNNullRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

 {
    SNNullDetector *_detector;
}


@property (nonatomic) unsigned int blockSize; // ivar: _blockSize
@property (nonatomic) CGFloat computationalDutyCycle; // ivar: _computationalDutyCycle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL graphIsDeadEnded; // ivar: _graphIsDeadEnded
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (nonatomic) BOOL shouldThrowException; // ivar: _shouldThrowException
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNullRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif