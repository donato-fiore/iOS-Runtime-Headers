// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (nonatomic) NSUInteger reconciledStateVersion; // ivar: _reconciledStateVersion
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
-(id)initWithChangeUUID:(id)arg0 reconciledStateHash:(id)arg1 reconciledStateVersion:(NSUInteger)arg2 changeType:(NSUInteger)arg3 uniqueID:(id)arg4 syncStateItem:(id)arg5 passData:(id)arg6 ;
-(id)initWithChangeUUID:(id)arg0 reconciledStateHash:(id)arg1 reconciledStateVersion:(NSUInteger)arg2 changeType:(NSUInteger)arg3 uniqueID:(id)arg4 syncStateItem:(id)arg5 passData:(id)arg6 baseManifestHashForPartialUpdate:(id)arg7 remoteAssetsForPartialUpdate:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtoPassSyncChange:(id)arg0 ;
-(id)protoPassSyncChange;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif