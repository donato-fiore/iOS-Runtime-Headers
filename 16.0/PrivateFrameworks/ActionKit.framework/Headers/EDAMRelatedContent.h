// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMRELATEDCONTENT_H
#define EDAMRELATEDCONTENT_H

@class NSNumber, NSArray, NSString;


#import "FATObject.h"
#import "EDAMContact.h"

@interface EDAMRelatedContent : FATObject

@property (retain, nonatomic) NSNumber *accessType; // ivar: _accessType
@property (retain, nonatomic) NSArray *authors; // ivar: _authors
@property (retain, nonatomic) NSString *clipUrl; // ivar: _clipUrl
@property (retain, nonatomic) EDAMContact *contact; // ivar: _contact
@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (retain, nonatomic) NSNumber *contentType; // ivar: _contentType
@property (retain, nonatomic) NSNumber *date; // ivar: _date
@property (retain, nonatomic) NSString *sourceFaviconUrl; // ivar: _sourceFaviconUrl
@property (retain, nonatomic) NSString *sourceId; // ivar: _sourceId
@property (retain, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (retain, nonatomic) NSString *sourceUrl; // ivar: _sourceUrl
@property (retain, nonatomic) NSString *teaser; // ivar: _teaser
@property (retain, nonatomic) NSArray *thumbnails; // ivar: _thumbnails
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *url; // ivar: _url
@property (retain, nonatomic) NSString *visibleUrl; // ivar: _visibleUrl


+(id)structFields;
+(id)structName;


@end


#endif