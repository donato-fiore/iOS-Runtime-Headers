// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFORYOULINKRECOMMENDATION_H
#define WBSFORYOULINKRECOMMENDATION_H

@class NSMutableSet, UIImage, NSString, NSNumber, CNContact, NSURL, NSDate, NSSet, NSUUID;

#import <Foundation/Foundation.h>


@interface WBSForYouLinkRecommendation : NSObject {
    NSMutableSet *_originalQueries;
    UIImage *_appIcon;
}


@property (readonly, nonatomic) UIImage *appIcon;
@property (readonly, copy, nonatomic) NSString *badgeBundleIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSNumber *cachedScore; // ivar: _cachedScore
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UIImage *contactImage; // ivar: _contactImage
@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) NSDate *lastSeenDate; // ivar: _lastSeenDate
@property (readonly, copy, nonatomic) NSSet *originalQueries;
@property (readonly, copy, nonatomic) NSString *originalQueriesString;
@property (readonly, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (readonly, nonatomic) BOOL prefersLeadImage;
@property (copy, nonatomic) NSString *secondarySourceIdentifier; // ivar: _secondarySourceIdentifier
@property (readonly, copy, nonatomic) NSString *simplifiedURLString; // ivar: _simplifiedURLString
@property (readonly, nonatomic) NSUInteger source; // ivar: _source
@property (retain, nonatomic) id *sourceID; // ivar: _sourceID
@property (readonly, nonatomic) UIImage *sourceIcon;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger topicSource; // ivar: _topicSource
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithTitle:(id)arg0 url:(id)arg1 lastSeenDate:(id)arg2 source:(NSUInteger)arg3 topicSource:(NSUInteger)arg4 ;
-(void)addOriginalQueries:(id)arg0 ;


@end


#endif