// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFI3BARSNETWORK_H
#define WIFI3BARSNETWORK_H

@class NSString, NSSet;
@protocol NSSecureCoding, WiFiCandidateNetwork, TBNetwork, TBScore;

#import <Foundation/Foundation.h>


@interface WiFi3BarsNetwork : NSObject <NSSecureCoding, WiFiCandidateNetwork>



@property (copy, nonatomic) NSString *SSID; // ivar: _SSID
@property (readonly, nonatomic) NSSet *accessPoints;
@property (readonly, nonatomic) NSSet *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL matched; // ivar: matched
@property (retain, nonatomic) NSObject<TBNetwork> *network; // ivar: _network
@property (readonly, copy, nonatomic) NSString *password; // ivar: password
@property (readonly, nonatomic) NSObject<TBScore> *popularityScore; // ivar: _popularityScore
@property (readonly, nonatomic) NSObject<TBScore> *qualityScore; // ivar: _qualityScore
@property (readonly, nonatomic) NSInteger source;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) BOOL unwantedNetworkName; // ivar: _unwantedNetworkName
@property (readonly, nonatomic) NSUInteger venueGroup; // ivar: _venueGroup
@property (readonly, nonatomic) unsigned int venueType; // ivar: _venueType


+(BOOL)supportsSecureCoding;
-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif