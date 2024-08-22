// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPASSSYNCSTATEITEM_H
#define NPKPASSSYNCSTATEITEM_H

@class NSDictionary, NSData, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPKPassSyncStateItem : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *manifest; // ivar: _manifest
@property (retain, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NSNumber *sequenceCounter; // ivar: _sequenceCounter
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSString *uniqueID;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassSyncStateItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 sequenceCounter:(id)arg2 manifestHash:(id)arg3 manifest:(id)arg4 ;
-(id)initWithProtoSyncStateItem:(id)arg0 ;
-(id)protoSyncStateItem;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif