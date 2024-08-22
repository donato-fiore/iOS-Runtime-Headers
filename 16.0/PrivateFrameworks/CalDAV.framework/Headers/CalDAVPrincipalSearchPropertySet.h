// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVPRINCIPALSEARCHPROPERTYSET_H
#define CALDAVPRINCIPALSEARCHPROPERTYSET_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CalDAVPrincipalSearchPropertySet : NSObject

@property (retain, nonatomic) NSSet *stringProperties; // ivar: _stringProperties
@property (readonly, nonatomic) BOOL supportsPropertySearch;


+(id)searchSetWithProperties:(id)arg0 ;
-(BOOL)isEqualToPropertySet:(id)arg0 ;
-(BOOL)supportsPropertyTypeWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(BOOL)supportsWellKnownType:(int)arg0 ;
-(id)initWithSearchProperties:(id)arg0 ;
-(id)initWithStringProperties:(id)arg0 ;


@end


#endif