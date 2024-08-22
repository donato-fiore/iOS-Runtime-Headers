// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLAPPLEIMAGEFEATUREEXTRACTOROBJECTPRINTPARAMETERS_H
#define MLAPPLEIMAGEFEATUREEXTRACTOROBJECTPRINTPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MLAppleImageFeatureExtractorObjectPrintParameters : NSObject

@property (readonly) NSArray *expectedKeys; // ivar: _expectedKeys
@property (readonly) NSArray *expectedShapes; // ivar: _expectedShapes
@property (readonly) NSUInteger objectPrintVersion; // ivar: _objectPrintVersion


-(id)initObjectPrintParameters:(NSUInteger)arg0 expectedShapes:(id)arg1 expectedKeys:(id)arg2 error:(*id)arg3 ;


@end


#endif