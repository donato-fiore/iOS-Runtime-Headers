// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHCOACHINGDIAGNOSTICDATAITEM_H
#define CHCOACHINGDIAGNOSTICDATAITEM_H


#import <Foundation/Foundation.h>


@interface CHCoachingDiagnosticDataItem : NSObject

@property (nonatomic) CGFloat activeCalories; // ivar: _activeCalories
@property (nonatomic) CGFloat automotive; // ivar: _automotive
@property (nonatomic) CGFloat briskMinutes; // ivar: _briskMinutes
@property (nonatomic) CGFloat cycling; // ivar: _cycling
@property (nonatomic) CGFloat heartRate; // ivar: _heartRate
@property (nonatomic) CGFloat other; // ivar: _other
@property (nonatomic) CGFloat running; // ivar: _running
@property (nonatomic) CGFloat unknown; // ivar: _unknown
@property (nonatomic) CGFloat walking; // ivar: _walking
@property (nonatomic) CGFloat workout; // ivar: _workout


-(id)description;


@end


#endif