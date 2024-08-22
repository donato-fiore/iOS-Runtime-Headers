// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDFACETIMEACTION_H
#define DDFACETIMEACTION_H



#import "DDFaceTimeAudioAction.h"

@interface DDFaceTimeAction : DDFaceTimeAudioAction



+(BOOL)isAvailable;
-(id)dialRequest;
-(id)iconName;
-(id)localizedName;
-(id)notificationTitle;


@end


#endif