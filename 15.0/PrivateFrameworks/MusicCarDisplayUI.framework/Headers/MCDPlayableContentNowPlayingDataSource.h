// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDPLAYABLECONTENTNOWPLAYINGDATASOURCE_H
#define MCDPLAYABLECONTENTNOWPLAYINGDATASOURCE_H

@class NSString;
@protocol MCDNowPlayingDataSource;

#import <Foundation/Foundation.h>


@interface MCDPlayableContentNowPlayingDataSource : NSObject <MCDNowPlayingDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_itemProperties;
-(id)playingItemProperties;
-(id)queueItemProperties;
-(id)requestLabel;


@end


#endif