// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLECONTROLLER_H
#define FCARTICLECONTROLLER_H

@protocol FCContentContext;

#import <Foundation/Foundation.h>


@interface FCArticleController : NSObject

@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context


-(id)articleWithHeadline:(id)arg0 ;
-(id)articleWithID:(id)arg0 ;
-(id)articleWithID:(id)arg0 forceArticleUpdate:(BOOL)arg1 qualityOfService:(NSInteger)arg2 relativePriority:(NSInteger)arg3 ;
-(id)articleWithID:(id)arg0 qualityOfService:(NSInteger)arg1 relativePriority:(NSInteger)arg2 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg0 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg0 ignoreCacheForArticleIDs:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;


@end


#endif