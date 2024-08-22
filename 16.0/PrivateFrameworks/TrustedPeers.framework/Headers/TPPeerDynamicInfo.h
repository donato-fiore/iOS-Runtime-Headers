// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPEERDYNAMICINFO_H
#define TPPEERDYNAMICINFO_H

@class NSData, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface TPPeerDynamicInfo : NSObject

@property (readonly, nonatomic) NSUInteger clock; // ivar: _clock
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSDictionary *dispositions;
@property (readonly, nonatomic) NSSet *excludedPeerIDs; // ivar: _excludedPeerIDs
@property (readonly, nonatomic) NSSet *includedPeerIDs; // ivar: _includedPeerIDs
@property (readonly, nonatomic) NSSet *preapprovals; // ivar: _preapprovals
@property (readonly, nonatomic) NSData *sig; // ivar: _sig


+(id)dynamicInfoPBWithClock:(NSUInteger)arg0 includedPeerIDs:(id)arg1 excludedPeerIDs:(id)arg2 dispositions:(id)arg3 preapprovals:(id)arg4 ;
+(id)dynamicInfoWithClock:(NSUInteger)arg0 includedPeerIDs:(id)arg1 excludedPeerIDs:(id)arg2 dispositions:(id)arg3 preapprovals:(id)arg4 signingKeyPair:(id)arg5 error:(*id)arg6 ;
+(id)dynamicInfoWithData:(id)arg0 sig:(id)arg1 ;
-(BOOL)checkSignatureWithKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerDynamicInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithObj:(id)arg0 data:(id)arg1 sig:(id)arg2 ;


@end


#endif