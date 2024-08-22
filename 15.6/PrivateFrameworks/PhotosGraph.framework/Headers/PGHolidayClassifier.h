// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHOLIDAYCLASSIFIER_H
#define PGHOLIDAYCLASSIFIER_H


#import <Foundation/Foundation.h>


@interface PGHolidayClassifier : NSObject

@property (readonly, nonatomic) CGFloat celebrationThreshold; // ivar: _celebrationThreshold
@property (readonly, nonatomic) CGFloat dateWeight; // ivar: _dateWeight
@property (readonly, nonatomic) CGFloat edgeCaseSceneWeight; // ivar: _edgeCaseSceneWeight
@property (readonly, nonatomic) CGFloat imperativeSceneWeight; // ivar: _imperativeSceneWeight
@property (readonly, nonatomic) CGFloat importantSceneWeight; // ivar: _importantSceneWeight
@property (readonly, nonatomic) CGFloat localeLocationWeight; // ivar: _localeLocationWeight
@property (readonly, nonatomic) CGFloat locationWeight; // ivar: _locationWeight
@property (readonly, nonatomic) CGFloat mediumSceneWeight; // ivar: _mediumSceneWeight
@property (readonly, nonatomic) CGFloat momentLocationWeight; // ivar: _momentLocationWeight
@property (readonly, nonatomic) CGFloat sceneWeight; // ivar: _sceneWeight


-(BOOL)isCelebratingForDateScore:(CGFloat)arg0 sceneScore:(CGFloat)arg1 locationScore:(CGFloat)arg2 ;
-(CGFloat)scoreForHolidayDetectedScenes:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif