// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPCHANGE_H
#define TSWPCHANGE_H

@class TSPObject, NSDate, NSString, TSUColor;
@protocol TSKDocumentObject, TSPCopying, TSWPTextSpanningObject;


#import "TSWPChangeSession.h"
#import "TSWPStorage.h"

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject>

 {
    TSWPChangeSession *_session;
    NSDate *_date;
    NSString *_textAttributeUUIDString;
}


@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isDeletion;
@property (readonly, nonatomic) BOOL isInsertion;
@property (readonly, nonatomic) int kind; // ivar: _kind
@property (weak, nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (retain, nonatomic) TSWPChangeSession *session;
@property (readonly, nonatomic) BOOL showsHiddenDeletionMarkup;
@property (readonly, nonatomic) BOOL showsMarkup;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;
@property (readonly, nonatomic) TSUColor *textMarkupColor;


-(BOOL)canMergeWithKind:(int)arg0 session:(id)arg1 ;
-(BOOL)isEquivalentToObject:(id)arg0 ;
-(BOOL)isFromChangeSession:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 kind:(int)arg1 session:(id)arg2 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)migrateWithDocumentRoot:(id)arg0 ;
-(void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg0 key:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)trackedTextDidChange;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif