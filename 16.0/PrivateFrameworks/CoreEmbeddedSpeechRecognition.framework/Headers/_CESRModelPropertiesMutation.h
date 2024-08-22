// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CESRMODELPROPERTIESMUTATION_H
#define _CESRMODELPROPERTIESMUTATION_H

@class NSString;
@protocol CESRModelPropertiesMutating;

#import <Foundation/Foundation.h>

#import "CESRModelProperties.h"

@interface _CESRModelPropertiesMutation : NSObject <CESRModelPropertiesMutating>

 {
    CESRModelProperties *_baseModel;
    NSString *_modelVersion;
    NSString *_modelType;
    NSString *_modelRoot;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setModelRoot:(id)arg0 ;
-(void)setModelType:(id)arg0 ;
-(void)setModelVersion:(id)arg0 ;


@end


#endif