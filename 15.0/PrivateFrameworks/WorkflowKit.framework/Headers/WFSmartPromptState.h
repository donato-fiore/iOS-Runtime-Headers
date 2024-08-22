// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSMARTPROMPTSTATE_H
#define WFSMARTPROMPTSTATE_H

@class NSString, WFContentDestination, WFContentAttribution;
@protocol WFSerializableContent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSmartPromptState : NSObject <WFSerializableContent, NSSecureCoding>



@property (readonly, nonatomic) NSString *actionUUID; // ivar: _actionUUID
@property (readonly, nonatomic) WFContentDestination *contentDestination; // ivar: _contentDestination
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *mode; // ivar: _mode
@property (readonly, nonatomic) WFContentAttribution *sourceContentAttribution; // ivar: _sourceContentAttribution
@property (readonly, nonatomic) NSString *status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)localizedUnsupportedEnvironmentError;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)stateFromDatabaseData:(id)arg0 ;
-(BOOL)matches:(id)arg0 ;
-(BOOL)matches:(id)arg0 ignoringAccountData:(BOOL)arg1 ;
-(id)databaseDataWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(id)arg0 sourceContentAttribution:(id)arg1 actionUUID:(id)arg2 contentDestination:(id)arg3 status:(id)arg4 ;
-(id)localizedDeniedPermissionsError;
-(id)localizedExfiltrationRestrictedError;
-(id)siriActionToolDescription;
-(id)stateByReplacingAccountWithAppOrigin;
-(id)stateWithStatus:(id)arg0 ;
-(id)stateWithStatus:(id)arg0 actionUUID:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif