// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLANGUAGECHANGELISTENER_H
#define MTLANGUAGECHANGELISTENER_H

@class NSString;
@protocol MTAgentNotificationListener;

#import <Foundation/Foundation.h>


@interface MTLanguageChangeListener : NSObject <MTAgentNotificationListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_languageChangeNotification;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)liveDarwinNotifications;
-(void)_handleLanguageChanged;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif