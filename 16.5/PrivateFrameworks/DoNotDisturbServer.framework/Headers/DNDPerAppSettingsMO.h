// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDPERAPPSETTINGSMO_H
#define DNDPERAPPSETTINGSMO_H



#import "DNDPerModeSettingsMO.h"
#import "DNDApplicationMO.h"

@interface DNDPerAppSettingsMO : DNDPerModeSettingsMO

@property (retain, nonatomic) DNDApplicationMO *application;


+(id)fetchRequest;


@end


#endif