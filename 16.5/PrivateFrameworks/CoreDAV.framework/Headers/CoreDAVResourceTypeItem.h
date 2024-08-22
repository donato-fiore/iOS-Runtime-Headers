// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVRESOURCETYPEITEM_H
#define COREDAVRESOURCETYPEITEM_H

@class NSSet;


#import "CoreDAVItem.h"
#import "CoreDAVItemWithNoChildren.h"

@interface CoreDAVResourceTypeItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *addressBook; // ivar: _addressBook
@property (retain, nonatomic) CoreDAVItemWithNoChildren *collection; // ivar: _collection
@property (retain, nonatomic) CoreDAVItemWithNoChildren *principal; // ivar: _principal
@property (retain, nonatomic) CoreDAVItemWithNoChildren *searchAddressBook; // ivar: _searchAddressBook
@property (retain, nonatomic) CoreDAVItemWithNoChildren *shared; // ivar: _shared
@property (readonly, nonatomic) NSSet *stringSet;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // ivar: _unauthenticated


+(id)copyParseRules;
-(BOOL)isTypeWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(id)description;
-(id)init;
-(void)write:(id)arg0 ;


@end


#endif