// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSUSERDEFAULTSX_H
#define CNCONTACTSUSERDEFAULTSX_H

@class CNFoundationUserDefaults;


#import "CNContactsUserDefaults.h"

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults; // ivar: _foundationUserDefaults


-(BOOL)isShortNameFormatEnabled;
-(BOOL)shortNameFormatPrefersNicknames;
-(NSInteger)displayNameOrder;
-(NSInteger)newContactDisplayNameOrder;
-(NSInteger)shortNameFormat;
-(NSInteger)sortOrder;
-(id)countryCode;
-(id)filteredGroupAndContainerIDs;
-(id)init;
-(id)initWithFoundationUserDefaults:(id)arg0 ;
-(void)setDisplayNameOrder:(NSInteger)arg0 ;
-(void)setFilteredGroupAndContainerIDs:(id)arg0 ;
-(void)setShortNameFormat:(NSInteger)arg0 ;
-(void)setShortNameFormatEnabled:(BOOL)arg0 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg0 ;


@end


#endif