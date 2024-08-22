// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIAFEEDERFILESYSTEM_H
#define OKMEDIAFEEDERFILESYSTEM_H

@class NSURL, NSArray;


#import "OKMediaFeeder.h"

@interface OKMediaFeederFileSystem : OKMediaFeeder {
    NSURL *_directoryURL;
}


@property (retain) NSArray *mediaURLs; // ivar: _mediaURLs


+(BOOL)isRemote;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithDirectoryURL:(id)arg0 ;
+(id)supportedSettings;
-(BOOL)canBePersisted;
-(NSUInteger)numberOfMediaObjects;
-(id)feederSettings;
-(id)indexesForMediaObjects:(id)arg0 ;
-(id)init;
-(id)initWithDirectoryURL:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)mediaObjectURLsAtIndexes:(id)arg0 ;
-(id)mediaObjectsAtIndexes:(id)arg0 ;
-(id)reloadMediaObjectsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif