// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPFETCHER_H
#define LPFETCHER_H


#import <Foundation/Foundation.h>

#import "LPEvent.h"

@interface LPFetcher : NSObject

@property (retain, nonatomic) LPEvent *_event; // ivar: _event
@property (readonly, nonatomic) unsigned int _loggingID; // ivar: _loggingID
@property (retain, nonatomic) id *userData; // ivar: _userData


-(id)init;
-(void)cancel;
-(void)fetchWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif