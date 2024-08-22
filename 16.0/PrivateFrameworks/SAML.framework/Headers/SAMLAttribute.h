// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMLATTRIBUTE_H
#define SAMLATTRIBUTE_H

@class NSString, NSArray;


#import "SAMLBaseElement.h"

@interface SAMLAttribute : SAMLBaseElement

@property (readonly, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nameFormat;
@property (readonly, nonatomic) NSArray *values;


+(id)createElement:(*id)arg0 ;
-(void)addAttributeValue:(id)arg0 ;


@end


#endif