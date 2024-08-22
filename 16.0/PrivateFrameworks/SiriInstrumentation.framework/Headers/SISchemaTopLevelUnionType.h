// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMATOPLEVELUNIONTYPE_H
#define SISCHEMATOPLEVELUNIONTYPE_H

@class NSString;
@protocol SISchemaProvisional;


#import "SISchemaInstrumentationMessage.h"
#import "SIComponentIdentifier.h"

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>



@property (readonly, nonatomic) int clockIsolationLevel;
@property (readonly, nonatomic) SIComponentIdentifier *componentIdentifier;
@property (readonly, nonatomic) int componentName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(int)joinability;
-(BOOL)isProvisional;
-(id)getComponentId;
-(id)getRequestLinkInfo;
-(id)getTypeId;
-(id)getVersion;
-(id)qualifiedMessageName;
-(id)wrapAsAnyEvent;
-(int)getAnyEventType;
-(int)getComponentName;


@end


#endif