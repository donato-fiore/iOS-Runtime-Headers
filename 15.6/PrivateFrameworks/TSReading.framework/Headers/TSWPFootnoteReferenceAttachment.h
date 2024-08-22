// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPFOOTNOTEREFERENCEATTACHMENT_H
#define TSWPFOOTNOTEREFERENCEATTACHMENT_H

@class NSString;


#import "TSWPTextualAttachment.h"
#import "TSWPStorage.h"

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

@property (retain, nonatomic) TSWPStorage *containedStorage; // ivar: _containedStorage
@property (retain, nonatomic) NSString *customMarkString; // ivar: _customMarkString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSearchable;
-(NSUInteger)findCharIndex;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 wpStorage:(id)arg1 ;
-(id)stringEquivalent;
-(int)elementKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)applyMark;
-(void)checkDebug;
-(void)dealloc;
-(void)setParentStorage:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif