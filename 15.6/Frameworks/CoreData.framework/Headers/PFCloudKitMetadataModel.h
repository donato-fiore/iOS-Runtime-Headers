// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCLOUDKITMETADATAMODEL_H
#define PFCLOUDKITMETADATAMODEL_H

@class NSString;
@protocol _PFAncillaryModelFactory;

#import <Foundation/Foundation.h>


@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)ancillaryEntityCount;
+(NSUInteger)ancillaryEntityOffset;
+(id)ancillaryModelNamespace;
+(id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)arg0 ;
+(id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)arg0 fromStore:(id)arg1 ;
+(void)_invalidateStaticCaches;
+(void)initialize;


@end


#endif