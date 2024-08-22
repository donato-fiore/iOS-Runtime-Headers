// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCSAFARIPASSWORDAUTOFILLDOMAINSCACHE_H
#define MCSAFARIPASSWORDAUTOFILLDOMAINSCACHE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCSafariPasswordAutoFillDomainsCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSMutableArray *memberQueueCache; // ivar: _memberQueueCache


+(id)sharedCache;
-(BOOL)isSafariPasswordAutoFillAllowedForURL:(id)arg0 ;
-(id)init;
-(void)rereadCache;


@end


#endif