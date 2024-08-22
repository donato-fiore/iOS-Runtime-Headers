// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDARWINNOTIFICATIONPROVIDER_H
#define HMDARWINNOTIFICATIONPROVIDER_H

@class HMFObject, NSString;
@protocol HMDarwinNotificationProvider;



@interface HMDarwinNotificationProvider : HMFObject <HMDarwinNotificationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(unsigned int)notifyCancel:(int)arg0 ;
-(unsigned int)notifyGetState:(int)arg0 state:(*NSUInteger)arg1 ;
-(unsigned int)notifyRegisterCheck:(char *)arg0 outToken:(*int)arg1 ;
-(unsigned int)notifyRegisterDispatch:(char *)arg0 outToken:(*int)arg1 queue:(id)arg2 handler:(id)arg3 ;


@end


#endif