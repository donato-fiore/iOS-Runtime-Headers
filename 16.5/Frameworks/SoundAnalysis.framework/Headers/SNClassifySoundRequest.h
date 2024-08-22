// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNCLASSIFYSOUNDREQUEST_H
#define SNCLASSIFYSOUNDREQUEST_H

@class NSString, NSArray;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>

#import "SNClassifierVariant.h"
#import "SNTimeDurationConstraint.h"

@interface SNClassifySoundRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

 {
    SNClassifierVariant *_classifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *knownClassifications; // ivar: _knownClassifications
@property CGFloat overlapFactor; // ivar: _overlapFactor
@property (readonly) Class superclass;
@property ? windowDuration; // ivar: _windowDuration
@property (readonly) SNTimeDurationConstraint *windowDurationConstraint; // ivar: _windowDurationConstraint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)initWithClassifierIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMLModel:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif