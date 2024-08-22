// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSOUNDPRINT100KSMOKEALARMMODEL_H
#define SNSOUNDPRINT100KSMOKEALARMMODEL_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface SNSoundPrint100kSmokeAlarmModel : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromSoundprint_Placeholder:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif