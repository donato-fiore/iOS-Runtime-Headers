// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPURGEABILITYLEVELMAPPER_H
#define TRIPURGEABILITYLEVELMAPPER_H

@protocol TRIPaths, TRIClientNamespaceMetadataStoring;

#import <Foundation/Foundation.h>


@interface TRIPurgeabilityLevelMapper : NSObject {
    id<TRIPaths> *_paths;
    id<TRIClientNamespaceMetadataStoring> *_namespaceMetadataStorage;
}




+(id)purgeabilityLevelFromCacheDeleteUrgency:(int)arg0 ;
+(int)availableSpaceClassFromPurgeabilityLevel:(int)arg0 ;
-(id)initWithPaths:(id)arg0 namespaceMetadataStorage:(id)arg1 ;
-(int)availableSpaceClassForFactorNames:(id)arg0 namespaceName:(id)arg1 ;
-(int)purgeabilityLevelForNamespace:(id)arg0 ;


@end


#endif