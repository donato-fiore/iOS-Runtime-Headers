// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLICATIONDATA_H
#define HMDAPPLICATIONDATA_H

@class HMFObject, NSMutableDictionary, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying, HMFDumpState;



@interface HMDApplicationData : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>



@property (retain, nonatomic) NSMutableDictionary *appDataDictionary; // ivar: _appDataDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *parentUUID; // ivar: _parentUUID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)applicationDataForIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 parentUUID:(id)arg1 ;
-(id)initWithParentUUID:(id)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeApplicationDataForIdentifier:(id)arg0 ;
-(void)setApplicationData:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateParentUUIDIfNil:(id)arg0 ;
-(void)updateWithModel:(id)arg0 ;


@end


#endif