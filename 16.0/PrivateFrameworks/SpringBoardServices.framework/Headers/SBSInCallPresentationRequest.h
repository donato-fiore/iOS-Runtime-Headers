// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSINCALLPRESENTATIONREQUEST_H
#define SBSINCALLPRESENTATIONREQUEST_H


#import <Foundation/Foundation.h>


@interface SBSInCallPresentationRequest : NSObject



+(id)identifiersForRequestedPresentations;
+(void)notePresentationEndForRequestWithIdentifier:(id)arg0 ;
+(void)performPresentationWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif