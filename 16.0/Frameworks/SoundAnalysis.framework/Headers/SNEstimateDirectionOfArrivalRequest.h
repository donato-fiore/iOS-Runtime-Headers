// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNESTIMATEDIRECTIONOFARRIVALREQUEST_H
#define SNESTIMATEDIRECTIONOFARRIVALREQUEST_H

@class NSString, NSArray;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>


@interface SNEstimateDirectionOfArrivalRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

 {
    NSString *_tuningPrefix;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *spatialSpectrum; // ivar: _spatialSpectrum
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTuningPrefix:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif