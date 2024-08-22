// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCSCREENCAPTURECONFIGURATION_H
#define AVCSCREENCAPTURECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVCScreenCaptureConfiguration : NSObject

@property (nonatomic) unsigned int frameRate; // ivar: _frameRate
@property (nonatomic) unsigned int height; // ivar: _height
@property (nonatomic) BOOL isWindowed; // ivar: _isWindowed
@property (nonatomic) unsigned int screenCaptureDisplayID; // ivar: _screenCaptureDisplayID
@property (copy, nonatomic) NSString *selectiveScreenUUID; // ivar: _selectiveScreenUUID
@property (nonatomic) unsigned int selectiveSharingPort; // ivar: _selectiveSharingPort
@property (nonatomic) unsigned int width; // ivar: _width


-(id)initWithHeight:(unsigned int)arg0 width:(unsigned int)arg1 framerate:(unsigned int)arg2 screenCaptureDisplayID:(unsigned int)arg3 ;
-(void)dealloc;


@end


#endif