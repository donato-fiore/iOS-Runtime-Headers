// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCONTEXTKITCLIENT_H
#define ATXCONTEXTKITCLIENT_H

@class CKContextClient;

#import <Foundation/Foundation.h>


@interface ATXContextKitClient : NSObject {
    CKContextClient *_ckClient;
}




-(id)ckClient;
-(id)level1TopicIdsForURL:(id)arg0 ;


@end


#endif