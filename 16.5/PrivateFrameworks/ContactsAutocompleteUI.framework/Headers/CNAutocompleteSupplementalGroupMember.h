// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETESUPPLEMENTALGROUPMEMBER_H
#define CNAUTOCOMPLETESUPPLEMENTALGROUPMEMBER_H

@class NSString, NSPersonNameComponents;

#import <Foundation/Foundation.h>


@interface CNAutocompleteSupplementalGroupMember : NSObject

@property (readonly, copy) NSString *address; // ivar: _address
@property (readonly) NSInteger addressType; // ivar: _addressType
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSPersonNameComponents *nameComponents; // ivar: _nameComponents


-(id)initWithName:(id)arg0 address:(id)arg1 addressType:(NSInteger)arg2 ;
-(id)initWithNameComponents:(id)arg0 address:(id)arg1 addressType:(NSInteger)arg2 ;


@end


#endif