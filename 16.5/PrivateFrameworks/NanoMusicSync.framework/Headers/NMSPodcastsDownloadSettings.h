// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTSDOWNLOADSETTINGS_H
#define NMSPODCASTSDOWNLOADSETTINGS_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NMSPodcastsDownloadSettings : NSObject <NSCopying>

 {
    NSInteger _collectionType;
    NSMutableDictionary *_dictionary;
}


@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSInteger numberOfEpisodes;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCollectionType:(NSInteger)arg0 ;
-(id)initWithCollectionType:(NSInteger)arg0 dictionary:(id)arg1 ;
-(id)initWithCollectionType:(NSInteger)arg0 legacyDownloadSettings:(id)arg1 ;
-(id)initWithCollectionType:(NSInteger)arg0 legacyDownloadSettingsDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif