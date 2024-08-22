// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8PAPERKIT20SYNAPSELINKINGENGINE_H
#define _TTC8PAPERKIT20SYNAPSELINKINGENGINE_H

@protocol SYLinkableContentItemFinderDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit20SynapseLinkingEngine : NSObject <SYLinkableContentItemFinderDelegate>

 {
    ? engine;
    ? delegate;
}




-(id)init;
-(void)linkableItemFinderItemsMightHaveChanged:(id)arg0 ;


@end


#endif