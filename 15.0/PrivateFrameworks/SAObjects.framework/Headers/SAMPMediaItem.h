// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPMEDIAITEM_H
#define SAMPMEDIAITEM_H

@class NSString, NSNumber;


#import "SAMPMediaEntity.h"
#import "SACalendar.h"
#import "SAMPReleaseInfo.h"

@interface SAMPMediaItem : SAMPMediaEntity

@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *artist;
@property (retain, nonatomic) SACalendar *datePurchased;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSNumber *perceivableStartTimeInSeconds;
@property (retain, nonatomic) SAMPReleaseInfo *releaseInfo;
@property (copy, nonatomic) NSString *sortAlbum;
@property (copy, nonatomic) NSString *sortArtist;


+(id)mediaItem;
+(id)mediaItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif