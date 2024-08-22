// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYLOCALECOUNTRY_H
#define BYLOCALECOUNTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BYLocaleCountry : NSObject

@property (copy, nonatomic) NSString *code; // ivar: _code
@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)comparatorForLocale:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif