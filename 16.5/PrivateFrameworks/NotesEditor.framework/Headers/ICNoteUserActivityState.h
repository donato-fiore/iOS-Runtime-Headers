// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEUSERACTIVITYSTATE_H
#define ICNOTEUSERACTIVITYSTATE_H

@class NSData, NSDate, NSString;


#import "ICNoteBaseUserActivityState.h"
#import "ICTextViewScrollState.h"

@interface ICNoteUserActivityState : ICNoteBaseUserActivityState

@property (copy, nonatomic) NSData *contentHash; // ivar: _contentHash
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (copy, nonatomic) NSString *folderID; // ivar: _folderID
@property (copy, nonatomic) NSString *folderName; // ivar: _folderName
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *noteID; // ivar: _noteID
@property (retain, nonatomic) ICTextViewScrollState *scrollState; // ivar: _scrollState
@property (nonatomic) _NSRange selectionRange; // ivar: _selectionRange
@property (copy, nonatomic) NSData *selectionRangeData; // ivar: _selectionRangeData
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) _NSRange visibleRange; // ivar: _visibleRange
@property (copy, nonatomic) NSData *visibleRangeData; // ivar: _visibleRangeData
@property (nonatomic) BOOL wantsContinuationStreams; // ivar: _wantsContinuationStreams


-(id)initWithNote:(id)arg0 ;
-(void)updateUserActivity:(id)arg0 ;


@end


#endif