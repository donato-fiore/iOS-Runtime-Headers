// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLPSSUMATCHER_H
#define SNLPSSUMATCHER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface SNLPSSUMatcher : NSObject {
    unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> _cppMatcher;
}


@property (readonly) NSURL *cacheDirectoryURL; // ivar: _cacheDirectoryURL


+(id)matcherWithDirectories:(id)arg0 initialApplicationInfos:(id)arg1 initializeModelsPreemptively:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)deregisterApp:(id)arg0 error:(*id)arg1 ;
-(BOOL)performFullCacheUpdate:(*id)arg0 ;
-(BOOL)registerApp:(id)arg0 error:(*id)arg1 ;
-(id)_initWithCacheDirectoryURL:(id)arg0 cppMatcher:(struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> )arg1 ;
-(id)responseForRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif