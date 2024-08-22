// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKMEDIAFEEDERURLS_H
#define OKMEDIAFEEDERURLS_H

@class NSArray;


#import "OKMediaFeeder.h"

@interface OKMediaFeederURLs : OKMediaFeeder {
    NSArray *_mediaURLs;
}




+(BOOL)isRemote;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithMediaObjects:(id)arg0 ;
+(id)mediaFeederWithMediaURLs:(id)arg0 ;
+(id)supportedSettings;
-(BOOL)canBePersisted;
-(NSUInteger)numberOfMediaObjects;
-(id)feederSettings;
-(id)indexesForMediaObjects:(id)arg0 ;
-(id)init;
-(id)initWithMediaObjects:(id)arg0 ;
-(id)initWithMediaURLs:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)mediaObjectURLsAtIndexes:(id)arg0 ;
-(id)mediaObjectsAtIndexes:(id)arg0 ;
-(id)reloadMediaObjectsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif