// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNSLIDECOLLECTIONSELECTION_H
#define KNSLIDECOLLECTIONSELECTION_H

@class TSKSelection, NSOrderedSet;


#import "KNSlideNode.h"

@interface KNSlideCollectionSelection : TSKSelection

@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) KNSlideNode *slideNodeToEdit; // ivar: _slideNodeToEdit
@property (readonly, nonatomic) NSOrderedSet *slideNodes; // ivar: _slideNodes


+(Class)archivedSelectionClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)UUIDDescription;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithSlideNode:(id)arg0 ;
-(id)initWithSlideNodes:(id)arg0 slideNodeToEdit:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif