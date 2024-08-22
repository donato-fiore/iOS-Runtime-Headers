// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASNOTESNAPSHOTITEMDATA_H
#define ICASNOTESNAPSHOTITEMDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollaborationStatus.h"
#import "ICASCollaborationType.h"
#import "ICASNoteType.h"

@interface ICASNoteSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *charLength; // ivar: _charLength
@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus; // ivar: _collaborationStatus
@property (readonly, nonatomic) ICASCollaborationType *collaborationType; // ivar: _collaborationType
@property (readonly, nonatomic) NSNumber *countOfAcceptances; // ivar: _countOfAcceptances
@property (readonly, nonatomic) NSNumber *countOfAttachmentOther; // ivar: _countOfAttachmentOther
@property (readonly, nonatomic) NSNumber *countOfDocScan; // ivar: _countOfDocScan
@property (readonly, nonatomic) NSNumber *countOfFullscreenDrawing; // ivar: _countOfFullscreenDrawing
@property (readonly, nonatomic) NSNumber *countOfFullscreenDrawingStrokes; // ivar: _countOfFullscreenDrawingStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1; // ivar: _countOfInlineDrawingV1
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1FingerStrokes; // ivar: _countOfInlineDrawingV1FingerStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1PencilStrokes; // ivar: _countOfInlineDrawingV1PencilStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2; // ivar: _countOfInlineDrawingV2
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2FingerStrokes; // ivar: _countOfInlineDrawingV2FingerStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2PencilStrokes; // ivar: _countOfInlineDrawingV2PencilStrokes
@property (readonly, nonatomic) NSNumber *countOfInvitees; // ivar: _countOfInvitees
@property (readonly, nonatomic) NSNumber *countOfTables; // ivar: _countOfTables
@property (readonly, nonatomic) NSNumber *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSNumber *hasChecklist; // ivar: _hasChecklist
@property (readonly, nonatomic) NSNumber *isLocked; // ivar: _isLocked
@property (readonly, nonatomic) NSNumber *isPinned; // ivar: _isPinned
@property (readonly, nonatomic) NSString *noteID; // ivar: _noteID
@property (readonly, nonatomic) ICASNoteType *noteType; // ivar: _noteType


+(id)dataName;
-(id)initWithNoteID:(id)arg0 noteType:(id)arg1 collaborationStatus:(id)arg2 collaborationType:(id)arg3 countOfInvitees:(id)arg4 countOfAcceptances:(id)arg5 countOfDocScan:(id)arg6 countOfInlineDrawingV1:(id)arg7 countOfInlineDrawingV2:(id)arg8 countOfFullscreenDrawing:(id)arg9 countOfTables:(id)arg10 countOfAttachmentOther:(id)arg11 hasChecklist:(id)arg12 isPinned:(id)arg13 isLocked:(id)arg14 charLength:(id)arg15 creationDate:(id)arg16 countOfInlineDrawingV1PencilStrokes:(id)arg17 countOfInlineDrawingV1FingerStrokes:(id)arg18 countOfInlineDrawingV2PencilStrokes:(id)arg19 countOfInlineDrawingV2FingerStrokes:(id)arg20 countOfFullscreenDrawingStrokes:(id)arg21 ;
-(id)toDict;


@end


#endif