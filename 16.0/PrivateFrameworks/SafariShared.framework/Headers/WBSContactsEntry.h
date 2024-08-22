// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCONTACTSENTRY_H
#define WBSCONTACTSENTRY_H

@class CNContact;

#import <Foundation/Foundation.h>


@interface WBSContactsEntry : NSObject

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact


+(BOOL)_isContactsLabel:(id)arg0 ;
+(BOOL)_isContactsProperty:(id)arg0 ;
+(BOOL)_isValueAStringForContactsProperty:(id)arg0 ;
+(BOOL)isWBSProxyProperty:(id)arg0 ;
+(id)_valueStringForValue:(id)arg0 wbsProperty:(id)arg1 wbsComponent:(id)arg2 ;
+(id)_valueStringForValue:(id)arg0 wbsProperty:(id)arg1 wbsComponent:(id)arg2 atIndex:(NSUInteger)arg3 ;
+(id)_valueStringForWBSComponent:(id)arg0 inAddress:(id)arg1 ;
+(id)_valueStringForWBSComponent:(id)arg0 inInstantMessageAddress:(id)arg1 ;
+(id)localizedWBSPropertyOrLabel:(id)arg0 ;
-(NSUInteger)_numberOfValuesForWBSProperty:(id)arg0 ;
-(NSUInteger)_numberOfValuesForWBSProperty:(id)arg0 andContact:(id)arg1 ;
-(id)fullName;
-(id)initWithContact:(id)arg0 ;
-(id)valueForWBSProxyProperty:(id)arg0 ;
-(id)valueStringForWBSProperty:(id)arg0 wbsComponent:(id)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif