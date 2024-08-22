// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDELETECOLLECTIONSACTION_H
#define PXDELETECOLLECTIONSACTION_H

@class NSArray;
@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXDeleteCollectionsAction : PXPhotosAction {
    NSArray *_assetCollections;
    NSArray *_collectionLists;
    id<PXFastEnumeration> *_collections;
}




-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)collections;
-(id)initWithCollection:(id)arg0 ;
-(id)initWithCollections:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif