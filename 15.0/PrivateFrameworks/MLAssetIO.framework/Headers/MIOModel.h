// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIOMODEL_H
#define MIOMODEL_H

@class NSArray, NSString;
@protocol NSMutableCopying, MIOModeling;

#import <Foundation/Foundation.h>

#import "MIOModelDescription.h"
#import "MIOVersionInfo.h"

@interface MIOModel : NSObject <NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *layers;
@property (readonly, copy, nonatomic) MIOModelDescription *modelDescription;
@property (retain, nonatomic) NSObject<MIOModeling> *modelImpl; // ivar: _modelImpl
@property (readonly, copy, nonatomic) NSString *modelTypeName;
@property (readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
@property (readonly, copy, nonatomic) NSArray *subModels;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMessageStream:(struct CodedInputStream *)arg0 parserContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithModeling:(id)arg0 ;
-(id)layerHistogram;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif