// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNCLASSIFYSOUNDREQUEST_H
#define SNCLASSIFYSOUNDREQUEST_H

@class MLModel, NSString, NSArray;
@protocol SNAnalyzerCreating, SNRequest;

#import <Foundation/Foundation.h>

#import "SNTimeDurationConstraint.h"

@interface SNClassifySoundRequest : NSObject <SNAnalyzerCreating, SNRequest>

 {
    MLModel *_model;
}


@property (retain) NSString *classifierIdentifier; // ivar: _classifierIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *knownClassifications; // ivar: _knownClassifications
@property CGFloat overlapFactor; // ivar: _overlapFactor
@property (readonly) Class superclass;
@property ? windowDuration; // ivar: _windowDuration
@property (readonly) SNTimeDurationConstraint *windowDurationConstraint; // ivar: _windowDurationConstraint


+(BOOL)supportsSecureCoding;
+(id)knownClassificationsForClassifierIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClassifySoundRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)initWithClassifierIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMLModel:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif