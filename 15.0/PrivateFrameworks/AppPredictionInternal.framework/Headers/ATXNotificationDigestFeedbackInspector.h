// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONDIGESTFEEDBACKINSPECTOR_H
#define ATXNOTIFICATIONDIGESTFEEDBACKINSPECTOR_H


#import <Foundation/Foundation.h>


@interface ATXNotificationDigestFeedbackInspector : NSObject



-(id)_formatFeedbackDataForBundleId:(id)arg0 feedback:(id)arg1 ;
-(id)_histogramKeyForLocation:(id)arg0 feedback:(id)arg1 ;
-(void)addToHistogramForBundleId:(id)arg0 location:(id)arg1 feedback:(id)arg2 withReply:(id)arg3 ;
-(void)clearHistogramWithShouldResetBookmarks:(BOOL)arg0 reply:(id)arg1 ;
-(void)setHistogramValueForBundleId:(id)arg0 location:(id)arg1 feedback:(id)arg2 value:(id)arg3 withReply:(id)arg4 ;
-(void)showHistogramForBundleId:(id)arg0 withReply:(id)arg1 ;


@end


#endif