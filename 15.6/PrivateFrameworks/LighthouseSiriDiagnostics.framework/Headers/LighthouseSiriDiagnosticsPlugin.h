// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIGHTHOUSESIRIDIAGNOSTICSPLUGIN_H
#define LIGHTHOUSESIRIDIAGNOSTICSPLUGIN_H

@class NSString;
@protocol MLRTaskPerforming, ODCurarePersonalizationProtocol, ODCurareEvaluatorProtocol, ODCurareDataProviderProtocol;

#import <Foundation/Foundation.h>


@interface LighthouseSiriDiagnosticsPlugin : NSObject <MLRTaskPerforming, ODCurarePersonalizationProtocol, ODCurareEvaluatorProtocol, ODCurareDataProviderProtocol>

 {
    BOOL shouldStop;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)getCatsSummaryWithStreamName:(id)arg0 afterTime:(id)arg1 andBeforeTime:(id)arg2 error:(*id)arg3 ;
+(id)getDelegationSummaryWithStreamName:(id)arg0 afterTime:(id)arg1 andBeforeTime:(id)arg2 error:(*id)arg3 ;
+(id)getFatalCatIdsWithError:(*id)arg0 ;
+(id)readMessagesFromFeatureStore:(id)arg0 afterTime:(id)arg1 andBeforeTime:(id)arg2 andIsBase64:(BOOL)arg3 error:(*id)arg4 ;
+(void)initialize;
-(id)init;
-(id)performTrialTask:(id)arg0 outError:(*id)arg1 ;
-(void)stop;


@end


#endif