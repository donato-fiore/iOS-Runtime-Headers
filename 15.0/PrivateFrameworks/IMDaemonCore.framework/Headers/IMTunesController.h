// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMTUNESCONTROLLER_H
#define IMTUNESCONTROLLER_H

@class NSDate, NSDictionary, NSMutableArray, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMTunesController : NSObject {
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}


@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSString *messageFormat;
@property (nonatomic) NSMutableDictionary *playerInfo; // ivar: _playerInfo


+(id)sharedTunesController;
-(id)init;
-(void)_playerChanged:(id)arg0 ;
-(void)_playerChangedNotification:(id)arg0 ;
-(void)_updateMessage;
-(void)addListener:(id)arg0 ;
-(void)dealloc;
-(void)removeListener:(id)arg0 ;


@end


#endif