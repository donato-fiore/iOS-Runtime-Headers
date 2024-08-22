// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSHSTSSTORAGE_H
#define _NSHSTSSTORAGE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface _NSHSTSStorage : NSObject {
    *_CFHSTSPolicy _policy;
}


@property (readonly) *_CFHSTSPolicy _policyRef;
@property (readonly, nonatomic) NSURL *path;


+(id)sharedPersistentStore;
-(BOOL)shouldPromoteHostToHTTPS:(id)arg0 ;
-(id)initInMemoryStore;
-(id)initPersistentStoreWithURL:(id)arg0 ;
-(id)nonPreloadedHosts;
-(void)dealloc;
-(void)handleSTSHeader:(id)arg0 forURL:(id)arg1 ;
-(void)resetHSTSForHost:(id)arg0 ;
-(void)resetHSTSHostsSinceDate:(id)arg0 ;


@end


#endif