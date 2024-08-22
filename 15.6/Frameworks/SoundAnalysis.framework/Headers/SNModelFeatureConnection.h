// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNMODELFEATURECONNECTION_H
#define SNMODELFEATURECONNECTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SNModelFeatureConnection : NSObject

@property (readonly) NSString *destinationFeatureName; // ivar: _destinationFeatureName
@property (readonly) NSString *sourceFeatureName; // ivar: _sourceFeatureName


-(id)initWithSourceFeatureName:(id)arg0 destinationFeatureName:(id)arg1 ;


@end


#endif