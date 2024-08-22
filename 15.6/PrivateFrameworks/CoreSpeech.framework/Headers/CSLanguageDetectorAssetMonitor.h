// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLANGUAGEDETECTORASSETMONITOR_H
#define CSLANGUAGEDETECTORASSETMONITOR_H

@protocol CSLanguageDetectorAssetMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSLanguageDetectorAssetMonitor : NSObject

@property (weak, nonatomic) NSObject<CSLanguageDetectorAssetMonitorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)_supportedLocale:(id)arg0 ;
-(void)startMonitor;
-(void)supportedLocale:(id)arg0 ;


@end


#endif