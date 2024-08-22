// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIOPACKAGEDFILEMODEL_H
#define MIOPACKAGEDFILEMODEL_H

@class NSString, NSDictionary, NSArray, NSURL;
@protocol MIOModeling;

#import <Foundation/Foundation.h>

#import "MIOModelDescription.h"
#import "MIOVersionInfo.h"

@interface MIOPackagedFileModel : NSObject <MIOModeling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *layerHistogram;
@property (readonly, copy, nonatomic) NSArray *layers;
@property (copy, nonatomic) MIOModelDescription *modelDescription; // ivar: _modelDescription
@property (readonly, copy, nonatomic) NSString *modelTypeName;
@property (copy, nonatomic) NSURL *packageURL; // ivar: _packageURL
@property (copy, nonatomic) NSObject<MIOModeling> *specificationFileModel; // ivar: _specificationFileModel
@property (readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
@property (readonly, copy, nonatomic) NSArray *subModels;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithModel:(id)arg0 ;


@end


#endif