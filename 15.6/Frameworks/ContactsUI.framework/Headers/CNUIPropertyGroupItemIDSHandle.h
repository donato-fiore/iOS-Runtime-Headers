// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIPROPERTYGROUPITEMIDSHANDLE_H
#define CNUIPROPERTYGROUPITEMIDSHANDLE_H

@class NSString, CNContactProperty, CNUIContactPropertyIDSHandle;
@protocol CNUIIDSHandle;

#import <Foundation/Foundation.h>


@interface CNUIPropertyGroupItemIDSHandle : NSObject <CNUIIDSHandle>



@property (readonly, copy, nonatomic) NSString *_cnui_IDSIDRepresentation;
@property (readonly, copy, nonatomic) CNContactProperty *contactProperty; // ivar: _contactProperty
@property (readonly, nonatomic) CNUIContactPropertyIDSHandle *contactPropertyHandle; // ivar: _contactPropertyHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsPropertyGroupItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPropertyGroupItem:(id)arg0 ;


@end


#endif