// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPASSSYNCCHANGE_H
#define NPKPASSSYNCCHANGE_H

@class NSData, NSUUID, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NPKPassSyncStateItem.h"

@interface NPKPassSyncChange : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSData *baseManifestHashForPartialUpdate; // ivar: _baseManifestHashForPartialUpdate
@property (nonatomic) NSUInteger changeType; // ivar: _changeType
@property (retain, nonatomic) NSUUID *changeUUID; // ivar: _changeUUID
@property (retain, nonatomic) NSData *passData; // ivar: _passData
@property (retain, nonatomic) NSData *reconciledStateHash; // ivar: _reconciledStateHash
@property (retain, nonatomic) NSDictionary *remoteAssetsForPartialUpdate; // ivar: _remoteAssetsForPartialUpdate
@property (retain, nonatomic) NPKPassSyncStateItem *syncStateItem; // ivar: _syncStateItem
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChange:(id)arg0 ;
-(BOOL)isEqualToChangeIgnoringUUID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithChangeUUID:(id)arg0 reconciledStateHash:(id)arg1 changeType:(NSUInteger)arg2 uniqueID:(id)arg3 syncStateItem:(id)arg4 passData:(id)arg5 ;
-(id)initWithChangeUUID:(id)arg0 reconciledStateHash:(id)arg1 changeType:(NSUInteger)arg2 uniqueID:(id)arg3 syncStateItem:(id)arg4 passData:(id)arg5 baseManifestHashForPartialUpdate:(id)arg6 remoteAssetsForPartialUpdate:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtoPassSyncChange:(id)arg0 ;
-(id)protoPassSyncChange;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif