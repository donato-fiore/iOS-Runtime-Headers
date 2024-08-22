// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFOOTNOTEREFERENCEATTACHMENT_H
#define TSWPFOOTNOTEREFERENCEATTACHMENT_H

@class NSString;


#import "TSWPTextualAttachment.h"
#import "TSWPStorage.h"

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

@property (retain, nonatomic) TSWPStorage *containedStorage; // ivar: _containedStorage
@property (copy, nonatomic) NSString *customMarkString; // ivar: _customMarkString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSearchable;
-(BOOL)shouldArchiveStringEquivalent;
-(BOOL)supportsUUID;
-(NSUInteger)findCharIndex;
-(NSUInteger)findCharIndexWithHintIndex:(*NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 wpStorage:(id)arg1 ;
-(id)objectsForStyleMigrating;
-(id)stringEquivalent;
-(unsigned int)elementKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)applyMark;
-(void)checkDebug;
-(void)dealloc;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setParentStorage:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif