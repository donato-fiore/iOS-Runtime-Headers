// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPQUICKTYPEURLSERVANTGUARDEDDATA_H
#define PPQUICKTYPEURLSERVANTGUARDEDDATA_H

@class PPQuickTypeItem, TUConversationLink, NSString;

#import <Foundation/Foundation.h>


@interface PPQuickTypeURLServantGuardedData : NSObject {
    PPQuickTypeItem *_lastItem;
    TUConversationLink *_tuConversationLink;
    NSString *_lastBundleId;
}




-(void)reset;


@end


#endif