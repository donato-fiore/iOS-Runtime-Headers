// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFWATCHLISTITEM_H
#define SFWATCHLISTITEM_H

@class NSString, NSDictionary, NSData;
@protocol SFWatchListItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFWatchListItem : NSObject <SFWatchListItem, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *addToUpNextText; // ivar: _addToUpNextText
@property (copy, nonatomic) NSString *addedToUpNextText; // ivar: _addedToUpNextText
@property (copy, nonatomic) NSString *continueInTextFormat; // ivar: _continueInTextFormat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *inUpNextText; // ivar: _inUpNextText
@property (copy, nonatomic) NSString *installButtonTitle; // ivar: _installButtonTitle
@property (nonatomic) BOOL isMediaContainer; // ivar: _isMediaContainer
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *openButtonTitle; // ivar: _openButtonTitle
@property (copy, nonatomic) NSString *purchaseOfferTextFormat; // ivar: _purchaseOfferTextFormat
@property (copy, nonatomic) NSString *seasonEpisodeTextFormat; // ivar: _seasonEpisodeTextFormat
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *watchListIdentifier; // ivar: _watchListIdentifier
@property (copy, nonatomic) NSString *watchLiveTextFormat; // ivar: _watchLiveTextFormat


+(BOOL)supportsSecureCoding;
-(BOOL)hasIsMediaContainer;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif