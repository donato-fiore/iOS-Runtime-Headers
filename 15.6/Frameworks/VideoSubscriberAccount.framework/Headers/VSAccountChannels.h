// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSACCOUNTCHANNELS_H
#define VSACCOUNTCHANNELS_H

@class NSString, NSSet, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VSAccountChannels : NSObject <NSCopying>



@property (copy, nonatomic) NSString *adamID; // ivar: _adamID
@property (copy, nonatomic) NSSet *channelIDs; // ivar: _channelIDs
@property (copy, nonatomic) NSString *providerID; // ivar: _providerID
@property (copy, nonatomic) NSDictionary *providerInfo; // ivar: _providerInfo


+(id)deserializationResultWithData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)serializationResult;
-(id)serializationResultWithFormat:(NSUInteger)arg0 ;


@end


#endif