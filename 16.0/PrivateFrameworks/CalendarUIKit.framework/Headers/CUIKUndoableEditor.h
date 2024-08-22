// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKUNDOABLEEDITOR_H
#define CUIKUNDOABLEEDITOR_H

@class NSString;
@protocol CUIKEditor, CUIKCommitDelegate, CUIKDecisionDelegate, CUIKUndoDelegate;

#import <Foundation/Foundation.h>

#import "CUIKEditingManager.h"

@interface CUIKUndoableEditor : NSObject <CUIKEditor>

 {
    CUIKEditingManager *_editingManager;
}


@property (weak, nonatomic) NSObject<CUIKCommitDelegate> *commitDelegate; // ivar: _commitDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CUIKDecisionDelegate> *decisionDelegate; // ivar: _decisionDelegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CUIKUndoDelegate> *undoDelegate; // ivar: _undoDelegate


-(BOOL)_saveChangesToEvents:(id)arg0 span:(NSInteger)arg1 impliedCommitDecision:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)deleteEvent:(id)arg0 span:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)saveCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveEvent:(id)arg0 span:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)saveNewEvents:(id)arg0 commit:(BOOL)arg1 error:(*id)arg2 ;
-(id)_openEditingContextForObjects:(id)arg0 ;
-(id)initWithEditingManager:(id)arg0 ;
-(void)deleteCalendar:(id)arg0 forEntityType:(NSUInteger)arg1 ;
-(void)deleteCalendars:(id)arg0 ;
-(void)deleteEvents:(id)arg0 ;
-(void)deleteEvents:(id)arg0 span:(NSInteger)arg1 ;
-(void)deleteSources:(id)arg0 ;
-(void)saveCalendars:(id)arg0 ;
-(void)saveChangesToEvents:(id)arg0 impliedCommitDecision:(BOOL)arg1 ;
-(void)saveChangesToEvents:(id)arg0 span:(NSInteger)arg1 ;
-(void)saveChangesToSources:(id)arg0 ;
-(void)saveNewSources:(id)arg0 commit:(BOOL)arg1 ;


@end


#endif