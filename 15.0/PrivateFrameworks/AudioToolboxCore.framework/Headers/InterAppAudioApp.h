// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INTERAPPAUDIOAPP_H
#define INTERAPPAUDIOAPP_H

@class BKSApplicationStateMonitor, UIImage, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface InterAppAudioApp : NSObject {
    BKSApplicationStateMonitor *appMonitor;
}


@property (readonly, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) BOOL isCurrentApp; // ivar: _isCurrentApp
@property (readonly, nonatomic) BOOL isForeground; // ivar: _isForeground
@property (readonly, nonatomic) BOOL isHost; // ivar: _isHost
@property (readonly, nonatomic) NSInteger key; // ivar: _key
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)processRunningOnForeground:(int)arg0 ;
-(id)description;
-(id)init:(struct InterAppAudioAppInfo *)arg0 iconSize:(float)arg1 ;
-(void)dealloc;


@end


#endif