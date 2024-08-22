// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASGUIDEMONITOR_H
#define SASGUIDEMONITOR_H

@class NSString, AFUISiriLanguage, NSDate;
@protocol AFUISiriLanguageDelegate;

#import <Foundation/Foundation.h>


@interface SASGuideMonitor : NSObject <AFUISiriLanguageDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_language) AFUISiriLanguage *language; // ivar: _language
@property (retain, nonatomic) NSDate *lastAppUpdateTimestamp; // ivar: _lastAppUpdateTimestamp
@property (retain, nonatomic) NSDate *lastGuideCheck; // ivar: _lastGuideCheck
@property (readonly) Class superclass;


+(id)monitor;
-(id)init;
-(void)_applicationsDidChange;
-(void)checkForGuideUpdatesIfNecessary;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg0 ;


@end


#endif