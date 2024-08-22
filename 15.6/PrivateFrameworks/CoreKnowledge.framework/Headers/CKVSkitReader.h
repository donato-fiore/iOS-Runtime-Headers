// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSKITREADER_H
#define CKVSKITREADER_H

@class NSURL, NSString;
@protocol CKVSkitReadAccess;

#import <Foundation/Foundation.h>

#import "CKVProvisionalResourceManager.h"

@interface CKVSkitReader : NSObject <CKVSkitReadAccess>

 {
    NSURL *_directoryURL;
    CKVProvisionalResourceManager *_resourceManager;
    unique_ptr<skitbridge::Searcher, std::default_delete<skitbridge::Searcher>> _searcher;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)deactivate;
-(id)_activationBlock:(SEL)arg0 ;
-(id)_deactivationBlock:(SEL)arg0 ;
-(id)indexLocale;
-(id)init;
-(id)initWithSkitDirectoryURL:(id)arg0 ;
-(id)initWithSkitDirectoryURL:(id)arg0 lifespan:(CGFloat)arg1 ;
-(id)matchSpansOfTokenChain:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)prewarm;


@end


#endif