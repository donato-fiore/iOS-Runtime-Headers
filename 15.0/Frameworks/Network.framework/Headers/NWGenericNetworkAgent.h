// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWGENERICNETWORKAGENT_H
#define NWGENERICNETWORKAGENT_H

@class NSString, NSUUID;
@protocol NWPrettyDescription;

#import <Foundation/Foundation.h>


@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *agentDescription;
@property (readonly, nonatomic) NSString *agentDomain;
@property (readonly, nonatomic) NSString *agentType;
@property (readonly, nonatomic) NSUUID *agentUUID;
@property *netagent internalNetagent; // ivar: _internalNetagent
@property (readonly, nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property (readonly, nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (readonly, nonatomic, getter=isUserActivated) BOOL userActivated;
@property (readonly, nonatomic, getter=isVoluntary) BOOL voluntary;


-(BOOL)isNexusProvider;
-(BOOL)requiresAssert;
-(BOOL)supportsBrowse;
-(BOOL)supportsGroups;
-(BOOL)supportsResolve;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)initWithKernelAgent:(struct netagent *)arg0 ;
-(void)dealloc;


@end


#endif