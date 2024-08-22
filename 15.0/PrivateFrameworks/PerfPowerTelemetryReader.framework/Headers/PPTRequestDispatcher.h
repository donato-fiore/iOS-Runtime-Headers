// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTREQUESTDISPATCHER_H
#define PPTREQUESTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface PPTRequestDispatcher : NSObject



+(id)sharedInstance;
-(id)executeRequest:(id)arg0 withError:(*id)arg1 ;


@end


#endif