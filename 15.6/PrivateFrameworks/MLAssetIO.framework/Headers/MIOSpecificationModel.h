// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIOSPECIFICATIONMODEL_H
#define MIOSPECIFICATIONMODEL_H

@class NSString, NSDictionary, NSArray, NSData;
@protocol MIOModeling;

#import <Foundation/Foundation.h>

#import "MIOModelDescription.h"
#import "MIOParserContext.h"
#import "MIOVersionInfo.h"

@interface MIOSpecificationModel : NSObject <MIOModeling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *layerHistogram; // ivar: _layerHistogram
@property (readonly, copy, nonatomic) NSArray *layers; // ivar: _layers
@property (copy, nonatomic) MIOModelDescription *modelDescription; // ivar: _modelDescription
@property (readonly, copy, nonatomic) NSString *modelTypeName; // ivar: _modelTypeName
@property (readonly, copy, nonatomic) MIOParserContext *parserContext; // ivar: _parserContext
@property (readonly, copy, nonatomic) NSData *specificationData; // ivar: _specificationData
@property (readonly, copy, nonatomic) MIOVersionInfo *specificationVersion; // ivar: _specificationVersion
@property (readonly, copy, nonatomic) NSArray *subModels; // ivar: _subModels
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMessageStream:(struct CodedInputStream *)arg0 parserContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithSpecificationData:(id)arg0 parserContext:(id)arg1 error:(*id)arg2 ;


@end


#endif