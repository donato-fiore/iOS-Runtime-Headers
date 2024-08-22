// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAEDITOPERATION_H
#define IPAEDITOPERATION_H

@class NSString;
@protocol NSObject, NSCopying;

#import <Foundation/Foundation.h>


@interface IPAEditOperation : NSObject <NSObject, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_identifierForUUIDMap;
+(id)_mapDispatchQueue;
+(id)_uuidForIdentifierMap;
+(id)operationIdentifierForUUID:(id)arg0 ;
+(id)operationUUIDForIdentifier:(id)arg0 ;
+(id)presetifyAdjustment:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOperation:(id)arg0 ;
-(id)UUID;
-(id)archivalRepresentation;
-(id)autoIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)init;
-(id)initWithOperation:(id)arg0 ;
-(id)initWithSettingsDictionary:(id)arg0 ;
-(id)settingsDictionary;


@end


#endif