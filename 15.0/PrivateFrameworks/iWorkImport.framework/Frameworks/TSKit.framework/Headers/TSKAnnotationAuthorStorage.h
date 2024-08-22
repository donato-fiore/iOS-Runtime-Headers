// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKANNOTATIONAUTHORSTORAGE_H
#define TSKANNOTATIONAUTHORSTORAGE_H

@class TSPObject, NSSet, NSMutableSet;



@interface TSKAnnotationAuthorStorage : TSPObject

@property (readonly) NSSet *authors;
@property (retain, nonatomic) NSMutableSet *mutableAuthors; // ivar: _mutableAuthors


-(BOOL)p_withToleranceDoesColorSet:(id)arg0 containColor:(id)arg1 ;
-(BOOL)shouldDelayArchiving;
-(NSInteger)indexForColorKey:(id)arg0 usedColors:(id)arg1 ;
-(NSInteger)p_hashCodeForColorKey:(id)arg0 ;
-(id)authorInStorageAddingAuthorIfNecessary:(id)arg0 ;
-(id)authorInStorageMatchingAuthor:(id)arg0 ;
-(id)authorsMatchingPrivateID:(id)arg0 ;
-(id)currentAuthorColorWithKey:(id)arg0 ;
-(id)description;
-(id)nextAuthorColor;
-(id)packageLocator;
-(id)preferredAuthorMatchingPrivateID:(id)arg0 name:(id)arg1 ;
-(unsigned int)delayedArchivingPriority;
-(void)addAuthor:(id)arg0 ;
-(void)didAddAuthorRelationshipToDocument;
-(void)didRemoveAuthorRelationshipFromDocument;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeAuthor:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif