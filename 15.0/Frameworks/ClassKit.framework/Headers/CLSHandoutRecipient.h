// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSHANDOUTRECIPIENT_H
#define CLSHANDOUTRECIPIENT_H

@class NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSHandoutRecipient : CLSObject <CLSRelationable>



@property (copy, nonatomic) NSString *classID; // ivar: _classID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *parentObjectID;
@property (copy, nonatomic) NSString *personID; // ivar: _personID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithClassID:(id)arg0 personID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif