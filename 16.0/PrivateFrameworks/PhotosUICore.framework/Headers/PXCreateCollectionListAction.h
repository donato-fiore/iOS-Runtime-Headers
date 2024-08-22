// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCREATECOLLECTIONLISTACTION_H
#define PXCREATECOLLECTIONLISTACTION_H

@class NSString, PHCollectionList;
@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXCreateCollectionListAction : PXPhotosAction

@property (readonly, nonatomic) NSObject<PXFastEnumeration> *childCollections; // ivar: _childCollections
@property (copy, nonatomic) NSString *createdCollectionIdentifier; // ivar: _createdCollectionIdentifier
@property (readonly, nonatomic) PHCollectionList *createdCollectionList; // ivar: _createdCollectionList
@property (readonly, nonatomic) NSUInteger indexInParentCollectionList; // ivar: _indexInParentCollectionList
@property (readonly, nonatomic) PHCollectionList *parentCollectionList; // ivar: _parentCollectionList
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithTitle:(id)arg0 parentCollectionList:(id)arg1 childCollections:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif