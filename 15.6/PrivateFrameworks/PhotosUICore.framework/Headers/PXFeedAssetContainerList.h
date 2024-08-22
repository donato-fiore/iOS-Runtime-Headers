// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDASSETCONTAINERLIST_H
#define PXFEEDASSETCONTAINERLIST_H

@class NSString, NSOrderedSet;
@protocol PLAssetContainerList;

#import <Foundation/Foundation.h>


@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList>



@property (readonly, nonatomic) NSUInteger containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSOrderedSet *sectionInfos; // ivar: _sectionInfos
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *transientIdentifier; // ivar: _transientIdentifier


-(BOOL)canEditContainers;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)containers;
-(id)containersRelationshipName;
-(id)managedObjectContext;
-(id)photoLibrary;


@end


#endif