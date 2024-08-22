// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPHISHINGURLCLASSIFIERWITHFALLBACK_H
#define WBSPHISHINGURLCLASSIFIERWITHFALLBACK_H

@protocol WBSPhishingURLClassifier;

#import <Foundation/Foundation.h>


@interface WBSPhishingURLClassifierWithFallback : NSObject <WBSPhishingURLClassifier>



@property (readonly, nonatomic) NSObject<WBSPhishingURLClassifier> *fallbackClassifier; // ivar: _fallbackClassifier
@property (readonly, nonatomic) NSObject<WBSPhishingURLClassifier> *urlClassifier; // ivar: _urlClassifier


+(id)buildChain:(id)arg0 ;
-(id)initWithURLClassifier:(id)arg0 fallback:(id)arg1 ;
-(void)classifyURL:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif