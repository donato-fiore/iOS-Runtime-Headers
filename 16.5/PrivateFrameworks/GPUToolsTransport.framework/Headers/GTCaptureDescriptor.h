// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTCAPTUREDESCRIPTOR_H
#define GTCAPTUREDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTCaptureDescriptor : NSObject <NSSecureCoding>



@property (nonatomic) BOOL ignoreUnusedResources; // ivar: _ignoreUnusedResources
@property (nonatomic) BOOL includeBacktrace; // ivar: _includeBacktrace
@property (nonatomic) NSUInteger sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger streamRef; // ivar: _streamRef
@property (nonatomic) BOOL suspendAfterCapture; // ivar: _suspendAfterCapture
@property (nonatomic) NSUInteger triggerHitsToEnd; // ivar: _triggerHitsToEnd
@property (nonatomic) NSUInteger triggerHitsToStart; // ivar: _triggerHitsToStart


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif