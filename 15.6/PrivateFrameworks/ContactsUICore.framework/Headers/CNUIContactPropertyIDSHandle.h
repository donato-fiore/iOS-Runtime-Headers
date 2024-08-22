// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICONTACTPROPERTYIDSHANDLE_H
#define CNUICONTACTPROPERTYIDSHANDLE_H

@class NSString, CNContactProperty;
@protocol CNUIIDSHandle;

#import <Foundation/Foundation.h>


@interface CNUIContactPropertyIDSHandle : NSObject <CNUIIDSHandle>



@property (readonly, copy, nonatomic) NSString *_cnui_IDSIDRepresentation;
@property (readonly, copy, nonatomic) CNContactProperty *contactProperty; // ivar: _contactProperty
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *idsID; // ivar: _idsID
@property (readonly) Class superclass;


+(id)idsIDForEmail:(id)arg0 ;
+(id)idsIDForPhoneNumber:(id)arg0 ;
+(id)supportedContactPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContactProperty:(id)arg0 ;


@end


#endif