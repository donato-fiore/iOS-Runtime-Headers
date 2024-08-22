// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONTENT_H
#define CONTENT_H

@class INObject, NSString, NSNumber, NSURL, NSDate, NSArray;


#import "Content.h"

@interface Content : INObject

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSNumber *appDisambiguation;
@property (nonatomic, copy) NSURL *detailsUrl;
@property (nonatomic, copy) NSString *episodeNumber;
@property (nonatomic, copy) NSDate *finaleDate;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) NSNumber *hasMoreResults;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, retain) NSNumber *isInWatchList;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSURL *punchoutUrl;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) Content *season;
@property (nonatomic, retain) NSNumber *seasonCount;
@property (nonatomic, copy) NSString *seasonNumber;
@property (nonatomic, retain) Content *show;
@property (nonatomic) NSInteger type;
@property (nonatomic, copy) NSString *umcId;
@property (nonatomic, copy) NSString *utsSearchUrl;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif