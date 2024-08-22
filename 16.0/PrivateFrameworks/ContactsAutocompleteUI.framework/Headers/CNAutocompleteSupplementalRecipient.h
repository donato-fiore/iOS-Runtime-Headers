// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETESUPPLEMENTALRECIPIENT_H
#define CNAUTOCOMPLETESUPPLEMENTALRECIPIENT_H

@class NSString, NSPersonNameComponents;

#import <Foundation/Foundation.h>


@interface CNAutocompleteSupplementalRecipient : NSObject

@property (readonly, copy) NSString *address; // ivar: _address
@property (readonly) NSInteger addressType; // ivar: _addressType
@property (readonly, copy) NSPersonNameComponents *nameComponents; // ivar: _nameComponents


-(id)initWithNameComponents:(id)arg0 address:(id)arg1 addressType:(NSInteger)arg2 ;


@end


#endif