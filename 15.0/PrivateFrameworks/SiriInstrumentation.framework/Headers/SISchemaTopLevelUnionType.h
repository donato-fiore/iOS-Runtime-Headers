// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMATOPLEVELUNIONTYPE_H
#define SISCHEMATOPLEVELUNIONTYPE_H

@class NSString;
@protocol SISchemaProvisional;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isProvisional;
-(id)getTypeId;
-(id)getVersion;
-(id)qualifiedMessageName;
-(id)wrapAsAnyEvent;
-(int)getAnyEventType;


@end


#endif