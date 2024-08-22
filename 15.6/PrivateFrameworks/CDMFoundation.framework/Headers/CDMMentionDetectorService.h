// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMMENTIONDETECTORSERVICE_H
#define CDMMENTIONDETECTORSERVICE_H

@class MRRMultimodalMentionDetector;


#import "CDMDAGBaseService.h"

@interface CDMMentionDetectorService : CDMDAGBaseService

@property (retain, nonatomic) MRRMultimodalMentionDetector *mentionDetector; // ivar: _mentionDetector


+(id)assetFolderNames;
+(id)trialFactorName;
-(BOOL)isAssetRequired;
-(BOOL)isEnabled;
-(id)getPredictor:(id)arg0 forLocale:(id)arg1 status:(*id)arg2 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)predictWithInput:(id)arg0 forLocale:(id)arg1 status:(*id)arg2 ;
-(id)setup:(id)arg0 ;


@end


#endif