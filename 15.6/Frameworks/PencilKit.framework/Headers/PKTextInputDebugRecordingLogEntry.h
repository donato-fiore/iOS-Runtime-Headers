// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDEBUGRECORDINGLOGENTRY_H
#define PKTEXTINPUTDEBUGRECORDINGLOGENTRY_H

@class CHTextInputQueryItem;


#import "PKTextInputDebugLogEntry.h"
#import "PKDrawing.h"

@interface PKTextInputDebugRecordingLogEntry : PKTextInputDebugLogEntry

@property (retain, nonatomic) PKDrawing *_originalDrawing; // ivar: __originalDrawing
@property (retain, nonatomic) CHTextInputQueryItem *_resultQueryItem; // ivar: __resultQueryItem


+(id)_dictionaryRepresentationForDrawing:(id)arg0 detailLevel:(NSInteger)arg1 containsInProgress:(BOOL)arg2 ;
+(id)_dictionaryRepresentationForTarget:(id)arg0 ;
+(id)_dictionaryRepresentationForTargetContentInfo:(id)arg0 elementType:(id)arg1 detailLevel:(NSInteger)arg2 contentLevel:(NSInteger)arg3 resultAffectedRange:(struct _NSRange )arg4 localeIdentifiers:(id)arg5 ;
-(id)dictionaryRepresentationWithDetailLevel:(NSInteger)arg0 targetContentLevel:(NSInteger)arg1 ;
-(id)initWithResultCommand:(id)arg0 ;
-(id)inputDrawing;
-(void)_extractDataFromResultCommand:(id)arg0 ;


@end


#endif