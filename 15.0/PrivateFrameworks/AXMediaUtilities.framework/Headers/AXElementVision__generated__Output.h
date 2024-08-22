// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXELEMENTVISION__GENERATED__OUTPUT_H
#define AXELEMENTVISION__GENERATED__OUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface AXElementVision__generated__Output : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *confidence; // ivar: _confidence
@property (retain, nonatomic) MLMultiArray *coordinates; // ivar: _coordinates
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 coordinates:(id)arg1 ;


@end


#endif