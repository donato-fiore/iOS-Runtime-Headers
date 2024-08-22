// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLAYBACKERRORMESSAGE_H
#define VUIPLAYBACKERRORMESSAGE_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface VUIPlaybackErrorMessage : NSObject

@property (retain, nonatomic) NSDictionary *deviceInfo; // ivar: _deviceInfo
@property (retain, nonatomic) NSURL *knownIssuesURL; // ivar: _knownIssuesURL


+(id)sharedInstance;
-(id)_createQueryItemsFor:(id)arg0 withDevice:(id)arg1 withLanguageCode:(id)arg2 ;
-(id)_getLanguageCode;
-(id)_getSessionInfoFor:(id)arg0 withError:(id)arg1 ;
-(id)init;
-(void)_getBaseURL:(id)arg0 ;
-(void)_getLocalizedErrorMessageFrom:(id)arg0 completion:(id)arg1 ;
-(void)_logMetricsWithMessageType:(id)arg0 withSession:(id)arg1 withDevice:(id)arg2 withLanguageCode:(id)arg3 ;
-(void)getLocalizedErrorMessageFor:(id)arg0 withError:(id)arg1 completion:(id)arg2 ;


@end


#endif