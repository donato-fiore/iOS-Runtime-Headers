// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HBXUNITSUPPORT_H
#define HBXUNITSUPPORT_H

@class HKDisplayTypeController, HKUnitPreferenceController;

#import <Foundation/Foundation.h>


@interface HBXUnitSupport : NSObject

@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(id)initWithUnitPreferenceController:(id)arg0 displayTypeController:(id)arg1 ;
-(id)localizedDisplayNameForUnit:(id)arg0 nameContext:(NSInteger)arg1 ;
-(id)localizedPreferredUnitDisplayNameForType:(id)arg0 nameContext:(NSInteger)arg1 ;
-(id)preferredUnitForType:(id)arg0 ;
-(void)updatePreferredUnit:(id)arg0 forType:(id)arg1 ;


@end


#endif