// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLODLDCLASSIFIERV1_H
#define SLODLDCLASSIFIERV1_H

@class NSString, NSNumber, NSDictionary, MLModel, NSArray;
@protocol SLODLDModelComponent;

#import <Foundation/Foundation.h>


@interface SLODLDClassifierV1 : NSObject <SLODLDModelComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *inputOrigin; // ivar: _inputOrigin
@property (retain, nonatomic) NSDictionary *inputSpecs; // ivar: _inputSpecs
@property (retain, nonatomic) MLModel *odldClassifier; // ivar: _odldClassifier
@property (retain, nonatomic) NSArray *outputNodes; // ivar: _outputNodes
@property (readonly) Class superclass;


-(float)processEncodedTokens:(id)arg0 ;
-(id)_constructFeatureDictionary:(id)arg0 ;
-(id)_convert1dMLMultiArrayToNSArray:(id)arg0 ;
-(id)initWithConfigFile:(id)arg0 ;
-(void)_extractModelSpecs;


@end


#endif