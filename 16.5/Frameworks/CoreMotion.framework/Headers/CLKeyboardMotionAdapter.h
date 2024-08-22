// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKEYBOARDMOTIONADAPTER_H
#define CLKEYBOARDMOTIONADAPTER_H

@class NSString;
@protocol CLHidManagerDelegate, CLHidEventManagerDelegate, SBSSmartCoverStateObserver;

#import <Foundation/Foundation.h>


@interface CLKeyboardMotionAdapter : NSObject <CLHidManagerDelegate, CLHidEventManagerDelegate, SBSSmartCoverStateObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)eventUpdateForDevice:(id)arg0 event:(id)arg1 ;
-(void)inputReportForDevice:(id)arg0 report:(char *)arg1 length:(NSInteger)arg2 ;
-(void)monitorUpdateForDevice:(id)arg0 added:(BOOL)arg1 ;
-(void)smartCoverStateDidChange:(NSInteger)arg0 ;


@end


#endif