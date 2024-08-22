// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QRREPETITIONDETECTIONPREDICTOR_H
#define QRREPETITIONDETECTIONPREDICTOR_H

@class NSString;
@protocol QRPredictor;

#import <Foundation/Foundation.h>


@interface QRRepetitionDetectionPredictor : NSObject <QRPredictor>

 {
    CorrectionsRepetitionPredictorPlugin plugin;
}


@property (copy, nonatomic) NSString *locale; // ivar: locale


+(id)predictorName;
+(id)vocabFileName;
-(id)initWithLocale:(id)arg0 FilesPath:(id)arg1 status:(*id)arg2 ;
-(id)predictWithInput:(id)arg0 status:(*id)arg1 ;


@end


#endif