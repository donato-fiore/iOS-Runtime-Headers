// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKANNOTATIONAUTHORSTORAGE_H
#define TSKANNOTATIONAUTHORSTORAGE_H

@class NSSet;


#import "TSPObject.h"

@interface TSKAnnotationAuthorStorage : TSPObject

@property (readonly, nonatomic) NSSet *authors; // ivar: mAuthors


-(BOOL)shouldDelayArchiving;
-(id)authorWithName:(id)arg0 ;
-(id)description;
-(id)nextAuthorColor;
-(id)packageLocator;
-(unsigned int)delayedArchivingPriority;
-(void)addAuthor:(id)arg0 ;
-(void)dealloc;
-(void)didAddAuthorRelationshipToDocument;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg0 ;
-(void)didRemoveAuthorRelationshipFromDocument;
-(void)p_addAuthor:(id)arg0 isFromDocumentSupport:(BOOL)arg1 ;
-(void)removeAuthor:(id)arg0 ;


@end


#endif