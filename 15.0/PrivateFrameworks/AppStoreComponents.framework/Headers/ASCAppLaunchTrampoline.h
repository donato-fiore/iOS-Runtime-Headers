// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCAPPLAUNCHTRAMPOLINE_H
#define ASCAPPLAUNCHTRAMPOLINE_H

@protocol ASCAppLaunchTrampolineWorkspace;

#import <Foundation/Foundation.h>


@interface ASCAppLaunchTrampoline : NSObject

@property (readonly, nonatomic) NSObject<ASCAppLaunchTrampolineWorkspace> *workspace; // ivar: _workspace


+(id)log;
-(id)handleURL:(id)arg0 ;
-(id)handleURL:(id)arg0 workspace:(id)arg1 ;
-(id)init;
-(id)initWithWorkspace:(id)arg0 ;
-(id)openApplicationWithBundleIdentifier:(id)arg0 payloadURL:(id)arg1 ;
-(id)openApplicationWithBundleIdentifier:(id)arg0 payloadURL:(id)arg1 workspace:(id)arg2 ;
-(id)productPageURLForAdamId:(id)arg0 eventId:(id)arg1 ;
-(id)productPageURLForAdamId:(id)arg0 eventId:(id)arg1 encodedMetrics:(id)arg2 ;


@end


#endif