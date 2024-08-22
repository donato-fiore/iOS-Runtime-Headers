// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPUSHCHANNELID_H
#define TRIPUSHCHANNELID_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TRIPushChannelId : NSObject

@property (readonly, nonatomic) NSString *base64ChannelId; // ivar: _base64ChannelId
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) int populationType; // ivar: _populationType


+(BOOL)_writeToByte:(char *)arg0 fromHexByteString:(id)arg1 ;
+(id)_base64ChannelIdForIdentifier:(id)arg0 populationType:(int)arg1 ;
+(id)identifierByRemovingTestPrefixFromIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPushChannelId:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBase64EncodedString:(id)arg0 ;
-(id)initWithExperimentId:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithRolloutDeployment:(id)arg0 ;


@end


#endif