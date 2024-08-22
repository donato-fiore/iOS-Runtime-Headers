// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASREFERRALDATA_H
#define ICASREFERRALDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASReferralData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *referringApplication; // ivar: _referringApplication
@property (readonly, nonatomic) NSString *referringInboundUrl; // ivar: _referringInboundUrl


+(id)dataName;
-(id)initWithReferringApplication:(id)arg0 referringInboundUrl:(id)arg1 ;
-(id)toDict;


@end


#endif