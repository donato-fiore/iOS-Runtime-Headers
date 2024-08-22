// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARANGE_H
#define SARANGE_H



#import "SADomainObject.h"

@interface SARange : SADomainObject

@property (nonatomic) NSInteger length;
@property (nonatomic) NSInteger start;


+(id)range;
+(id)rangeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif