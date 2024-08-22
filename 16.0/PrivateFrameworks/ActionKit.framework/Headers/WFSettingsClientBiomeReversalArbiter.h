// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSETTINGSCLIENTBIOMEREVERSALARBITER_H
#define WFSETTINGSCLIENTBIOMEREVERSALARBITER_H

@class BMStream;

#import <Foundation/Foundation.h>


@interface WFSettingsClientBiomeReversalArbiter : NSObject

@property (readonly, nonatomic) BMStream *biomeStream; // ivar: _biomeStream


-(BOOL)lastEventEquals:(id)arg0 ;
-(id)initWithBiomeStream:(id)arg0 ;
-(void)getBookmarkForCurrentStateWithCompletionHandler:(id)arg0 ;
-(void)getReversalStateWithBookmark:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif