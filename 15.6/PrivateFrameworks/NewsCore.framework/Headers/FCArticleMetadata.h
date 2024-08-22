// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCARTICLEMETADATA_H
#define FCARTICLEMETADATA_H

@class NSString, NSDictionary, NSDate;
@protocol FCHeadlineMetadata;

#import <Foundation/Foundation.h>


@interface FCArticleMetadata : NSObject <FCHeadlineMetadata>



@property (readonly, nonatomic) NSString *articleID;
@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPaid;
@property (readonly, nonatomic) BOOL isTreatedAsNew;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSString *rapidUpdate; // ivar: _rapidUpdate
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) NSString *sourceChannelTagID;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *thumbnail;
@property (readonly, nonatomic) NSString *thumbnailAccentColor;
@property (readonly, nonatomic) NSString *thumbnailBackgroundColor;
@property (readonly, nonatomic) NSInteger thumbnailFocalFrame;
@property (readonly, nonatomic) NSString *thumbnailHQ;
@property (readonly, nonatomic) NSInteger thumbnailHQMetadata;
@property (readonly, nonatomic) NSString *thumbnailMedium;
@property (readonly, nonatomic) NSInteger thumbnailMediumMetadata;
@property (readonly, nonatomic) NSInteger thumbnailMetadata;
@property (readonly, nonatomic) NSString *thumbnailPrimaryColor;
@property (readonly, nonatomic) NSString *thumbnailTextColor;
@property (readonly, nonatomic) NSString *thumbnailUltraHQ;
@property (readonly, nonatomic) NSInteger thumbnailUltraHQMetadata;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *videoURL;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 identifier:(id)arg1 ;
-(id)publisherID;


@end


#endif