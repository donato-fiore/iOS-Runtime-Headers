// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCENEHOSTINGGRAPH_H
#define _UISCENEHOSTINGGRAPH_H

@class NSMutableDictionary, NSHashTable;
@protocol UISceneHostingGraph;

#import <Foundation/Foundation.h>


@interface _UISceneHostingGraph : NSObject <UISceneHostingGraph>

 {
    NSMutableDictionary *_hostingGraph;
    NSHashTable *_lazy_contextTrackingAssertions;
}




+(id)sharedInstance;
-(id)_init;
-(id)_localWindowGraphHostingContextID:(unsigned int)arg0 ;
-(id)localWindowGraphHostingContextID:(unsigned int)arg0 ;
-(id)observeLocalWindowGraphHostingContextID:(unsigned int)arg0 withHandler:(id)arg1 ;
-(void)_noteContextID:(unsigned int)arg0 hostedByWindow:(id)arg1 ;


@end


#endif