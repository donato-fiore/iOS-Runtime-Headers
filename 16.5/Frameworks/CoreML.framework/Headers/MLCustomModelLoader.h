// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCUSTOMMODELLOADER_H
#define MLCUSTOMMODELLOADER_H

@class NSString;
@protocol MLModelSpecificationLoader;

#import <Foundation/Foundation.h>


@interface MLCustomModelLoader : NSObject <MLModelSpecificationLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)customModelWithName:(id)arg0 modelDescription:(id)arg1 modelConfiguration:(id)arg2 parameterDictionary:(id)arg3 error:(*id)arg4 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)parametersFromCustomModelSpec:(*void)arg0 error:(*id)arg1 ;


@end


#endif