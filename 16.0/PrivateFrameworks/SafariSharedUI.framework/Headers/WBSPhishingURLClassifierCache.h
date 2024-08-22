// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPHISHINGURLCLASSIFIERCACHE_H
#define WBSPHISHINGURLCLASSIFIERCACHE_H

@class NSCache;
@protocol WBSPhishingURLClassifier;

#import <Foundation/Foundation.h>


@interface WBSPhishingURLClassifierCache : NSObject <WBSPhishingURLClassifier>

 {
    NSCache *_cache;
}


@property (readonly, nonatomic) NSObject<WBSPhishingURLClassifier> *urlClassifier; // ivar: _urlClassifier


-(id)initWithURLClassifier:(id)arg0 ;
-(void)cacheClassification:(NSUInteger)arg0 forURL:(id)arg1 ;
-(void)classifyURL:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)clearCache;


@end


#endif