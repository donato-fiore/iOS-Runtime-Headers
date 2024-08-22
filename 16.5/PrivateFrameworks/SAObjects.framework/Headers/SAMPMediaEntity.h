// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPMEDIAENTITY_H
#define SAMPMEDIAENTITY_H

@class NSString;


#import "SADomainObject.h"
#import "SACalendar.h"
#import "SAMPPlaybackInfo.h"

@interface SAMPMediaEntity : SADomainObject

@property (copy, nonatomic) NSString *adamIdentifier;
@property (copy, nonatomic) NSString *brandIdentifier;
@property (retain, nonatomic) SACalendar *dateAdded;
@property (nonatomic) BOOL explicit;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (nonatomic) BOOL isExplicit;
@property (copy, nonatomic) NSString *mediaType;
@property (retain, nonatomic) SAMPPlaybackInfo *playbackInfo;
@property (copy, nonatomic) NSString *rawPlaybackInfo;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *sortTitle;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL unplayable;


+(id)mediaEntity;
+(id)mediaEntityWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif