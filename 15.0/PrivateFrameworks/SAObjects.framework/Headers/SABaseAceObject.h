// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SABASEACEOBJECT_H
#define SABASEACEOBJECT_H

@class NSString;
@protocol SAAceReferable;


#import "AceObject.h"

@interface SABaseAceObject : AceObject <SAAceReferable>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *metricsContext;
@property (readonly) Class superclass;


+(id)baseAceObject;
+(id)baseAceObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif