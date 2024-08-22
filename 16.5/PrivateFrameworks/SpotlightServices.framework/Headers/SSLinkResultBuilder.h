// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSLINKRESULTBUILDER_H
#define SSLINKRESULTBUILDER_H

@class NSArray, NSURL, NSString;


#import "SSResultBuilder.h"

@interface SSLinkResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *senderContactIdentifiers; // ivar: _senderContactIdentifiers
@property (retain, nonatomic) NSArray *senders; // ivar: _senders
@property (nonatomic) NSUInteger syndicationStatus; // ivar: _syndicationStatus
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSString *websiteTitle; // ivar: _websiteTitle


+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(id)buildCommand;
-(id)buildDescriptions;
-(id)buildThumbnail;
-(id)buildTitle;
-(id)initWithResult:(id)arg0 ;
-(id)subclassBuildHorizontallyScrollingCardSection;


@end


#endif