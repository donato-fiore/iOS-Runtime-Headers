// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPDOBJECTDISCOVERYDATA_H
#define WPDOBJECTDISCOVERYDATA_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface WPDObjectDiscoveryData : NSObject

@property (retain, nonatomic) NSMutableData *address; // ivar: _address
@property (nonatomic) NSInteger length; // ivar: _length
@property (retain, nonatomic) NSMutableData *payload; // ivar: _payload


+(id)addressFromNearbyToken:(id)arg0 ;
+(id)addressesFromNearbyTokens:(id)arg0 ;
+(id)objectDiscoveryReportFromAdvReport:(id)arg0 ;
+(unsigned char)applyMaskToAddress:(id)arg0 ;
-(id)description;
-(id)init;
-(id)updateWithKey:(id)arg0 Status:(unsigned char)arg1 Reserved:(id)arg2 ;
-(void)wipeout;


@end


#endif