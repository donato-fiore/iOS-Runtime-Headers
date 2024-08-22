// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MODIFYCONTACTATTRIBUTEINTENTRESPONSE_H
#define MODIFYCONTACTATTRIBUTEINTENTRESPONSE_H

@class INIntentResponse;


#import "ContactRelation.h"

@interface ModifyContactAttributeIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, retain) ContactRelation *updatedRelationship;


-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertiesByName:(id)arg0 ;


@end


#endif