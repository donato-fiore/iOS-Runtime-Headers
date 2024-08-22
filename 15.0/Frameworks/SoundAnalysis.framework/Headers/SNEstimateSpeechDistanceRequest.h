// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNESTIMATESPEECHDISTANCEREQUEST_H
#define SNESTIMATESPEECHDISTANCEREQUEST_H

@class NSString;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>


@interface SNEstimateSpeechDistanceRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpeechDistanceRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif