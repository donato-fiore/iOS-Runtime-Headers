// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSHOLIDAYDETECTEDSCENES_H
#define CLSHOLIDAYDETECTEDSCENES_H


#import <Foundation/Foundation.h>


@interface CLSHolidayDetectedScenes : NSObject

@property (readonly, nonatomic) NSUInteger detectedSceneEdgeCaseCount; // ivar: _detectedSceneEdgeCaseCount
@property (readonly, nonatomic) NSUInteger detectedSceneImperativeCount; // ivar: _detectedSceneImperativeCount
@property (readonly, nonatomic) NSUInteger detectedSceneImportantCount; // ivar: _detectedSceneImportantCount
@property (readonly, nonatomic) NSUInteger detectedSceneMediumCount; // ivar: _detectedSceneMediumCount


-(id)init;
-(void)recordDetectedSceneImportance:(NSUInteger)arg0 ;


@end


#endif