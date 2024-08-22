// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASCREENACTIONINFO_H
#define SASCREENACTIONINFO_H

@class NSString, NSArray, NSURL;


#import "SADomainObject.h"

@interface SAScreenActionInfo : SADomainObject

@property (copy, nonatomic) NSString *elementId;
@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *semanticData;
@property (copy, nonatomic) NSURL *semanticId;
@property (copy, nonatomic) NSURL *type;
@property (copy, nonatomic) NSString *value;


+(id)info;
+(id)infoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif