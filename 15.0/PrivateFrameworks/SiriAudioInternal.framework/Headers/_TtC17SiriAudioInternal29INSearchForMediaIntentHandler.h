// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17SIRIAUDIOINTERNAL29INSEARCHFORMEDIAINTENTHANDLER_H
#define _TTC17SIRIAUDIOINTERNAL29INSEARCHFORMEDIAINTENTHANDLER_H

@protocol INSearchForMediaIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC17SiriAudioInternal29INSearchForMediaIntentHandler : NSObject <INSearchForMediaIntentHandling>





-(id)init;
-(void)handleSearchForMedia:(id)arg0 completion:(id)arg1 ;
-(void)resolveMediaItemsForSearchForMedia:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif