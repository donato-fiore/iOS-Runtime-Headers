// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSEARCHTRIE_H
#define MTSEARCHTRIE_H


#import <Foundation/Foundation.h>


@interface MTSearchTrie : NSObject {
    ? rootNodes;
}




-(BOOL)checkForMatchesIn:(id)arg0 ;
-(id)init;
-(void)addMatchCandidate:(id)arg0 ;


@end


#endif