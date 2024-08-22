// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGREMINDEREXTRACTIONMODEL_H
#define SGREMINDEREXTRACTIONMODEL_H

@class _PASNotificationToken, NSDictionary, _PASLock;


#import "SGExtractionModel.h"

@interface SGReminderExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_enrichments;
    NSDictionary *_inputTokenMapping;
    NSDictionary *_outputConfig;
    NSDictionary *_reminderOverrides;
    _PASLock *_lock;
}




+(id)enrichTaggedCharacterRangesWithModelOutput:(id)arg0 usingInputCharacterRanges:(id)arg1 ;
+(id)inputFromTaggedCharacterRanges:(id)arg0 usingTokenMapping:(id)arg1 forModel:(id)arg2 ;
+(id)sharedInstance;
-(BOOL)hasWhitelistedVerbInContent:(id)arg0 ;
-(id)_init;
-(id)enrichments;
-(id)inputTokenMapping;
-(id)loadModel;
-(id)modelDescription;
-(id)modelInferences:(id)arg0 ;
-(id)outputConfig;
-(id)reminderOverrides;
-(id)whitelistedRangesInContent:(id)arg0 ;
-(id)whitelistedVerbInContent:(id)arg0 ;
-(struct _NSRange )_whitelistedVerbRangeInContent:(id)arg0 ;
-(void)dealloc;
-(void)setReminderOverridesForTesting:(id)arg0 ;
-(void)updateAll;


@end


#endif