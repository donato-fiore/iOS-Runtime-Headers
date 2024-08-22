// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWHIGHLIGHTEVENTALLOWLIST_H
#define _SWHIGHLIGHTEVENTALLOWLIST_H


#import <Foundation/Foundation.h>


@interface _SWHighlightEventAllowList : NSObject



+(Class)eventClassForType:(NSInteger)arg0 ;
+(NSInteger)eventTypeForClass:(Class)arg0 ;
+(id)_eventClassToTypeMap;
+(id)allowedClasses;


@end


#endif