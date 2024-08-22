// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLINEWRAPPINGCLASSIFIER_H
#define CRLINEWRAPPINGCLASSIFIER_H

@class NSString, MLModel;

#import <Foundation/Foundation.h>


@interface CRLineWrappingClassifier : NSObject

@property (readonly, nonatomic) NSUInteger featureCount;
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) MLModel *model; // ivar: _model
@property (readonly, nonatomic) NSString *modelLocale;


+(BOOL)localeIsSupported:(id)arg0 ;
+(id)modelLocaleForLocale:(id)arg0 ;
+(id)urlOfModelForLocale:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;


@end


#endif