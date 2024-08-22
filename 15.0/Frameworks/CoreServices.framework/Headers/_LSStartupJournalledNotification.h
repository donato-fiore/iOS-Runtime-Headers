// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSSTARTUPJOURNALLEDNOTIFICATION_H
#define _LSSTARTUPJOURNALLEDNOTIFICATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _LSStartupJournalledNotification : NSObject

@property (readonly, nonatomic) int notification; // ivar: _notification
@property (readonly, nonatomic) BOOL plugins; // ivar: _plugins
@property (readonly, nonatomic) NSArray *proxies; // ivar: _proxies


-(id)initWithNotification:(int)arg0 appProxies:(id)arg1 plugins:(BOOL)arg2 ;


@end


#endif