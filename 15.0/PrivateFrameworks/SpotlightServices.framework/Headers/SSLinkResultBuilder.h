// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSLINKRESULTBUILDER_H
#define SSLINKRESULTBUILDER_H

@class NSString, NSArray, NSURL;


#import "SSResultBuilder.h"

@interface SSLinkResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *coreSpotlightId; // ivar: _coreSpotlightId
@property (retain, nonatomic) NSArray *senderContactIdentifiers; // ivar: _senderContactIdentifiers
@property (nonatomic) NSUInteger syndicationStatus; // ivar: _syndicationStatus
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(id)buildCommand;
-(id)initWithResult:(id)arg0 ;
-(id)subclassBuildHorizontallyScrollingCardSection;


@end


#endif