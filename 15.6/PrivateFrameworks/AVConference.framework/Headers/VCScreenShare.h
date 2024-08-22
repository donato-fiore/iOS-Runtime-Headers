// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSCREENSHARE_H
#define VCSCREENSHARE_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface VCScreenShare : NSObject

@property (retain, nonatomic) NSNumber *clientPID; // ivar: _clientPID
@property (readonly, nonatomic) unsigned int frameRate; // ivar: _frameRate
@property (readonly, nonatomic) unsigned int height; // ivar: _height
@property (readonly, nonatomic) BOOL isWindowed; // ivar: _isWindowed
@property (readonly, nonatomic) unsigned int screenCaptureDisplayID; // ivar: _screenCaptureDisplayID
@property (retain, nonatomic) NSString *selectiveScreenUUID; // ivar: _selectiveScreenUUID
@property (readonly, nonatomic) unsigned int selectiveSharingPort; // ivar: _selectiveSharingPort
@property (readonly, nonatomic) unsigned int width; // ivar: _width


-(id)initWithConfig:(id)arg0 pid:(id)arg1 ;
-(void)dealloc;
-(void)setConfig:(id)arg0 pid:(id)arg1 ;
-(void)updateScreenShareWith:(id)arg0 pid:(id)arg1 ;


@end


#endif