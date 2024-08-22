// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTEPISODESYNCSTORAGE_H
#define MTEPISODESYNCSTORAGE_H

@class NSString;
@protocol MTEpisodeSyncProcessorStorageProviding;

#import <Foundation/Foundation.h>


@interface MTEpisodeSyncStorage : NSObject <MTEpisodeSyncProcessorStorageProviding>



@property (retain, nonatomic) NSString *podcastsDomainVersion;


-(id)feedUrlFromModernKey:(id)arg0 ;
-(id)importContext;
-(id)modernKeyFromFeedUrl:(id)arg0 ;
-(id)versionForKey:(id)arg0 ;
-(void)resetVersionForAllFeedUrls;
-(void)resetVersionForFeedUrl:(id)arg0 ;
-(void)setVersion:(id)arg0 forKey:(id)arg1 ;


@end


#endif