// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTEXTVIEWSCROLLSTATE_H
#define ICTEXTVIEWSCROLLSTATE_H

@class NSDate, NSDictionary, ICNote, NSString, TTMergeableStringSelection;

#import <Foundation/Foundation.h>


@interface ICTextViewScrollState : NSObject

@property (readonly, nonatomic) BOOL captureIsWithinTimeThreshold;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=isFromArchive) BOOL fromArchive; // ivar: _fromArchive
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL loadingFromDictionaryFailed; // ivar: _loadingFromDictionaryFailed
@property (weak, nonatomic) ICNote *note; // ivar: _note
@property (copy, nonatomic) NSString *noteIdentifier; // ivar: _noteIdentifier
@property (readonly, nonatomic) CGFloat timeIntervalSinceCapture;
@property (nonatomic) NSUInteger topLeftCharIndexAtCapture; // ivar: _topLeftCharIndexAtCapture
@property (retain, nonatomic) TTMergeableStringSelection *topLeftStringSelection; // ivar: _topLeftStringSelection
@property (nonatomic) CGFloat topLeftTextAttachmentScrollHeightOffsetRatio; // ivar: _topLeftTextAttachmentScrollHeightOffsetRatio
@property (readonly, nonatomic) NSUInteger topLeftTextCharacterIndex;


+(id)scrollStateForAttachment:(id)arg0 inNote:(id)arg1 ;
+(id)scrollStateForRange:(struct _NSRange )arg0 inNote:(id)arg1 ;
+(id)scrollStateForTextView:(id)arg0 ;
-(BOOL)applyToTextView:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 note:(id)arg1 ;


@end


#endif