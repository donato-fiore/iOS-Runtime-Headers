// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSKITREADER_H
#define KVSKITREADER_H

@class NSURL, NSString;
@protocol KVSkitReadAccess;

#import <Foundation/Foundation.h>

#import "KVProvisionalResourceManager.h"
#import "KVSkitWrapper.h"

@interface KVSkitReader : NSObject <KVSkitReadAccess>

 {
    NSURL *_directoryURL;
    KVProvisionalResourceManager *_resourceManager;
    KVSkitWrapper *_skit;
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
-(id)matchSpans:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)prewarm;


@end


#endif