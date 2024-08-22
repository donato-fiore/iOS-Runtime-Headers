// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7SWIFTUI11DISPLAYLINK_H
#define _TTC7SWIFTUI11DISPLAYLINK_H


#import <Foundation/Foundation.h>


@interface _TtC7SwiftUI11DisplayLink : NSObject {
    ? host;
    ? link;
    ? nextUpdate;
    ? currentUpdate;
    ? interval;
    ? reasons;
    ? currentThread;
    ? nextThread;
}




+(void)asyncThreadWithArg:(id)arg0 ;
-(id)init;
-(void)displayLinkTimer:(id)arg0 ;


@end


#endif