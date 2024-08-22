// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UABESTAPPSUGGESTIONMANAGERPROXY_H
#define UABESTAPPSUGGESTIONMANAGERPROXY_H

@class NSString;
@protocol UABestAppSuggestionManagerResponseProtocol;

#import <Foundation/Foundation.h>

#import "UABestAppSuggestionManager.h"

@interface UABestAppSuggestionManagerProxy : NSObject <UABestAppSuggestionManagerResponseProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) UABestAppSuggestionManager *weakManager; // ivar: _weakManager


-(void)notifyBestAppsChanged:(id)arg0 when:(id)arg1 confidence:(CGFloat)arg2 ;


@end


#endif