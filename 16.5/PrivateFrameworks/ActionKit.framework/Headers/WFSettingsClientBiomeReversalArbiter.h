// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETTINGSCLIENTBIOMEREVERSALARBITER_H
#define WFSETTINGSCLIENTBIOMEREVERSALARBITER_H

@class BPSPublisher;

#import <Foundation/Foundation.h>


@interface WFSettingsClientBiomeReversalArbiter : NSObject

@property (readonly, nonatomic) BPSPublisher *publisher; // ivar: _publisher
@property (readonly, nonatomic) BPSPublisher *reversePublisher; // ivar: _reversePublisher


-(BOOL)lastEventEquals:(id)arg0 ;
-(id)initWithBiomeStream:(id)arg0 ;
-(id)initWithPublisher:(id)arg0 reversePublisher:(id)arg1 ;
-(void)getBookmarkForCurrentStateWithCompletionHandler:(id)arg0 ;
-(void)getReversalStateWithBookmark:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif