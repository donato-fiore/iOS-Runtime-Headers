// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMUSICPLAYBACKINTENTDATASOURCE_H
#define MPCMUSICPLAYBACKINTENTDATASOURCE_H

@class NSString;
@protocol MPCPlaybackIntentDataSource;

#import <Foundation/Foundation.h>


@interface MPCMusicPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_getPlaybackContextForIntent:(id)arg0 withCompletion:(id)arg1 ;
-(void)getArchiveFromIntent:(id)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)getRemotePlaybackQueueFromIntent:(id)arg0 destination:(NSInteger)arg1 completion:(id)arg2 ;
-(void)getRepresentativeObjectFromIntent:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;


@end


#endif