// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSCENETAXONOMYOPERATIONPOINTS_H
#define VNSCENETAXONOMYOPERATIONPOINTS_H

@class NSString, NSURL, NSMapTable;


#import "VNOperationPoints.h"

@interface VNSceneTaxonomyOperationPoints : VNOperationPoints {
    NSString *_frameworkOperationPointsIdentifier;
    NSURL *_nonframeworkDataURL;
    NSMapTable *_labelToOperationPointsDataIndexMap;
    *? _operationPointsDataArray;
    NSUInteger _cachedHashValue;
}




+(BOOL)supportsSecureCoding;
+(id)URLForIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)loadFromIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)loadFromPropertyList:(id)arg0 error:(*id)arg1 ;
+(id)loadFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)getConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 withPrecision:(float)arg2 error:(*id)arg3 ;
-(BOOL)getConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 withRecall:(float)arg2 error:(*id)arg3 ;
-(BOOL)getDefaultConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)getPrecision:(*float)arg0 forClassificationIdentifier:(id)arg1 confidence:(float)arg2 error:(*id)arg3 ;
-(BOOL)getRecall:(*float)arg0 forClassificationIdentifier:(id)arg1 confidence:(float)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_allClassificationIdentifiers;
-(id)_propertyListRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabelToOperationPointsDataIndexMap:(id)arg0 operationPointsDataArray:(struct ? *)arg1 ;
-(struct ? *)_operationPointsDataForClassificationIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif