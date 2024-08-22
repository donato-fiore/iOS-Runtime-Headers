// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDELETIONAUTHORIZATIONSTATE_H
#define WFDELETIONAUTHORIZATIONSTATE_H

@class NSString;
@protocol WFSerializableContent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFDeletionAuthorizationState : NSObject <WFSerializableContent, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionUUID; // ivar: _actionUUID
@property (readonly, copy, nonatomic) NSString *contentItemClassName; // ivar: _contentItemClassName
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)stateFromDatabaseData:(id)arg0 ;
-(id)databaseDataWithError:(*id)arg0 ;
-(id)deniedPermissionsError;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(id)arg0 contentItemClassName:(id)arg1 actionUUID:(id)arg2 count:(NSUInteger)arg3 ;
-(id)localizedExfiltrationRestrictedError;
-(id)siriActionToolDescription;
-(id)stateWithStatus:(id)arg0 count:(NSUInteger)arg1 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif