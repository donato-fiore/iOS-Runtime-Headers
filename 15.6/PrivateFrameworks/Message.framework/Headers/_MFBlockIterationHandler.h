// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFBLOCKITERATIONHANDLER_H
#define _MFBLOCKITERATIONHANDLER_H

@protocol MFSearchResultHandler, QueryProgressMonitor;

#import <Foundation/Foundation.h>

#import "MFActivityMonitor.h"

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor>

 {
    id *_block;
    BOOL _cancelled;
    MFActivityMonitor *_monitor;
}




-(BOOL)handleMessage:(id)arg0 ;
-(BOOL)shouldCancel;
-(id)initWithBlock:(id)arg0 ;


@end


#endif