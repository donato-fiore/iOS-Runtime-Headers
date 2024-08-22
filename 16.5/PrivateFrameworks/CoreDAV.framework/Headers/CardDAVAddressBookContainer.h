// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARDDAVADDRESSBOOKCONTAINER_H
#define CARDDAVADDRESSBOOKCONTAINER_H

@class NSString, NSURL;


#import "CoreDAVContainer.h"

@interface CardDAVAddressBookContainer : CoreDAVContainer

@property (readonly, nonatomic) BOOL isAddressBook;
@property (nonatomic) BOOL isGuardianRestricted; // ivar: _isGuardianRestricted
@property (readonly, nonatomic) BOOL isSearchAddressBook;
@property (readonly, nonatomic) BOOL isSharedAddressBook;
@property (retain, nonatomic) NSString *maxImageSize; // ivar: _maxImageSize
@property (retain, nonatomic) NSString *maxResourceSize; // ivar: _maxResourceSize
@property (retain, nonatomic) NSURL *meCardURL; // ivar: _meCardURL


+(id)copyPropertyMappingsForParser;
-(id)description;
-(void)applyParsedProperties:(id)arg0 ;


@end


#endif