// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDPERMODESETTINGSMO_H
#define DNDPERMODESETTINGSMO_H

@class NSManagedObject, NSString;


#import "DNDFocusModeMO.h"

@interface DNDPerModeSettingsMO : NSManagedObject

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) DNDFocusModeMO *mode;


+(id)fetchRequest;
-(Class)dnd_settingsType;


@end


#endif