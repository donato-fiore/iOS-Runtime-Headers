// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPCHANGE_H
#define TSWPCHANGE_H

@class NSDate, TSUColor;
@protocol TSKDocumentObject, TSPCopying;


#import "TSPObject.h"
#import "TSWPChangeSession.h"
#import "TSWPStorage.h"

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying>

 {
    int _kind;
    TSWPChangeSession *_session;
    NSDate *_date;
    BOOL _hidden;
}


@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isDeletion;
@property (readonly, nonatomic) BOOL isInsertion;
@property (nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (retain, nonatomic) TSWPChangeSession *session;
@property (readonly, nonatomic) BOOL showsHiddenDeletionMarkup;
@property (readonly, nonatomic) BOOL showsMarkup;
@property (readonly, nonatomic) TSUColor *textMarkupColor;


-(BOOL)canMergeWithKind:(int)arg0 session:(id)arg1 ;
-(BOOL)isFromChangeSession:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 kind:(int)arg1 session:(id)arg2 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg0 ;
-(void)trackedTextDidChange;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif