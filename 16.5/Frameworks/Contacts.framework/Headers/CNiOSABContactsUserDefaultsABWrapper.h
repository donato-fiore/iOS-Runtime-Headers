// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABCONTACTSUSERDEFAULTSABWRAPPER_H
#define CNIOSABCONTACTSUSERDEFAULTSABWRAPPER_H


#import <Foundation/Foundation.h>


@interface CNiOSABContactsUserDefaultsABWrapper : NSObject



-(BOOL)ABPersonGetShortNameFormatEnabled;
-(BOOL)ABPersonGetShortNamePreferNicknames;
-(NSInteger)lastIgnoredNewDuplicatesCount;
-(id)abDefaultCountryCode;
-(id)displayedContactsFilterRepresentationPref;
-(unsigned int)ABPersonGetCompositeNameFormatForRecord:(*void)arg0 ;
-(unsigned int)ABPersonGetEditNameFormat;
-(unsigned int)ABPersonGetShortNameFormat;
-(unsigned int)ABPersonGetSortOrdering;
-(void)ABPersonSetCompositeNameFormat:(unsigned int)arg0 ;
-(void)ABPersonSetShortNameFormat:(unsigned int)arg0 ;
-(void)ABPersonSetShortNameFormatEnabled:(BOOL)arg0 ;
-(void)ABPersonSetShortNamePreferNicknames:(BOOL)arg0 ;
-(void)setDisplayedContactsFilterRepresentationPref:(id)arg0 ;
-(void)setLastIgnoredNewDuplicatesCount:(NSInteger)arg0 ;


@end


#endif