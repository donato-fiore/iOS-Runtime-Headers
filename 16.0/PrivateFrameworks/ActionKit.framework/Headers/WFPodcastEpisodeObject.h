// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPODCASTEPISODEOBJECT_H
#define WFPODCASTEPISODEOBJECT_H

@class MTLModel, NSString, NSDictionary, WFTimeInterval, NSNumber, NSURL, NSArray, NSDate;
@protocol MTLJSONSerializing, NSSecureCoding, WFNaming;



@interface WFPodcastEpisodeObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSString *artworkURLTemplate; // ivar: _artworkURLTemplate
@property (readonly, nonatomic) NSString *author; // ivar: _author
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) WFTimeInterval *duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *episodeNumber; // ivar: _episodeNumber
@property (readonly, nonatomic) NSURL *feedURL; // ivar: _feedURL
@property (readonly, nonatomic) NSArray *genres; // ivar: _genres
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *viewURL; // ivar: _viewURL
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;


@end


#endif