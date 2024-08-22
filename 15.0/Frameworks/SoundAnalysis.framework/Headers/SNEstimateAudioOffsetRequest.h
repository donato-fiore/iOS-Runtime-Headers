// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNESTIMATEAUDIOOFFSETREQUEST_H
#define SNESTIMATEAUDIOOFFSETREQUEST_H

@class NSString;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>

#import "SNAudioOffsetEstimator.h"

@interface SNEstimateAudioOffsetRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

 {
    SNAudioOffsetEstimator *_detector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEstimateAudioOffsetRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif