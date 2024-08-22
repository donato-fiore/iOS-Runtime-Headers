// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFHIRREFERENCEPROCESSOR_H
#define HDFHIRREFERENCEPROCESSOR_H


#import <Foundation/Foundation.h>


@interface HDFHIRReferenceProcessor : NSObject



+(BOOL)reference:(id)arg0 matchesIdentifier:(id)arg1 ;
+(BOOL)referenceIsAbsolute:(id)arg0 ;
+(BOOL)referenceRequiresContaining:(id)arg0 ;
+(id)identifierForResource:(id)arg0 containedInResource:(id)arg1 error:(*id)arg2 ;
+(id)identifierFromAbsoluteReferenceURL:(id)arg0 ;
+(id)newResourceFromResource:(id)arg0 containingOnlyResources:(id)arg1 error:(*id)arg2 ;
+(id)newResourceFromResource:(id)arg0 containingResource:(id)arg1 reference:(id)arg2 error:(*id)arg3 ;
+(id)referencesAtKeyPath:(id)arg0 resourceDictionary:(id)arg1 error:(*id)arg2 ;
+(id)resourceContainedInResource:(id)arg0 reference:(id)arg1 error:(*id)arg2 ;
+(id)resourceReferenceInReference:(id)arg0 error:(*id)arg1 ;
+(id)resourcesContainedInResource:(id)arg0 error:(*id)arg1 ;


@end


#endif