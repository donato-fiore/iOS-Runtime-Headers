// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUSPATIALAUDIOPREFERENCES_H
#define MRUSPATIALAUDIOPREFERENCES_H


#import <Foundation/Foundation.h>


@interface MRUSpatialAudioPreferences : NSObject

@property (readonly, nonatomic) BOOL isHeadTrackingEnabled; // ivar: _isHeadTrackingEnabled
@property (readonly, nonatomic) int mode; // ivar: _mode


-(id)description;
-(id)descriptionForSpatialMode:(int)arg0 ;
-(id)initWithMode:(int)arg0 headTrackingEnabled:(BOOL)arg1 ;


@end


#endif