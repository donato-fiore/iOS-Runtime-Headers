// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCLIENTMODELPREDICTIONREASONS_H
#define ATXCLIENTMODELPREDICTIONREASONS_H

@class NSBundle;

#import <Foundation/Foundation.h>


@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}




+(id)clientModelPredictionReasonsBundlePath;
-(id)actionAnchorReasonForAnchorType:(id)arg0 ;
-(id)actionBehavioralReason;
-(id)actionHeuristicReasonForHeuristicName:(id)arg0 ;
-(id)appAnchorReasonForAnchorType:(id)arg0 ;
-(id)appBehavioralReason;
-(id)appHeroAppReason;
-(id)appInstalledAppClipReason;
-(id)appLocationBasedAppClipReason;
-(id)appMagicalMomentReasonForAnchorType:(NSInteger)arg0 ;
-(id)init;
-(id)localizedStringForKey:(id)arg0 ;


@end


#endif