// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAVMEDIAOBJECT_H
#define CKAVMEDIAOBJECT_H



#import "CKMediaObject.h"

@interface CKAVMediaObject : CKMediaObject {
    BOOL _durationLoaded;
}


@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)description;


@end


#endif