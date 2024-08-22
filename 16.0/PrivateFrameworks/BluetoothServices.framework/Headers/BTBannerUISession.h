// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTBANNERUISESSION_H
#define BTBANNERUISESSION_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BTBannerUISession : NSObject {
    BOOL _bannerRunning;
    NSObject<OS_xpc_object> *_xpcConnection;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (nonatomic) int backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat batteryLevelInfo; // ivar: _batteryLevelInfo
@property (copy, nonatomic) NSString *centerContentItemsIcon; // ivar: _centerContentItemsIcon
@property (copy, nonatomic) NSString *centerContentItemsText; // ivar: _centerContentItemsText
@property (copy, nonatomic) NSString *centerContentText; // ivar: _centerContentText
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *leadingAccessoryImageName; // ivar: _leadingAccessoryImageName
@property (nonatomic) unsigned int leadingAccessoryImagePID; // ivar: _leadingAccessoryImagePID
@property (copy, nonatomic) NSString *leadingAccessoryImagePath; // ivar: _leadingAccessoryImagePath
@property (nonatomic) CGFloat lowBatteryLevel; // ivar: _lowBatteryLevel
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds
@property (copy, nonatomic) NSString *trailingAccessoryImageName; // ivar: _trailingAccessoryImageName
@property (copy, nonatomic) NSString *trailingAccessoryImagePath; // ivar: _trailingAccessoryImagePath
@property (copy, nonatomic) NSString *trailingAccessoryText; // ivar: _trailingAccessoryText


-(id)init;
-(void)_activate;
-(void)_xpcCompleted:(id)arg0 ;
-(void)_xpcConnectionMessage:(id)arg0 ;
-(void)_xpcEvent:(id)arg0 ;
-(void)_xpcSendMessage;
-(void)_xpcSendReplyError:(id)arg0 request:(id)arg1 ;
-(void)_xpcStart;
-(void)activate;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)invalidate;


@end


#endif