// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVPARSERULE_H
#define COREDAVPARSERULE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CoreDAVParseRule : NSObject

@property (readonly, nonatomic) NSString *elementName; // ivar: _elementName
@property (readonly, nonatomic) NSInteger maximumNumber; // ivar: _maximumNumber
@property (readonly, nonatomic) NSInteger minimumNumber; // ivar: _minimumNumber
@property (readonly, nonatomic) NSString *nameSpace; // ivar: _nameSpace
@property (readonly, nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, nonatomic) SEL setterMethod; // ivar: _setterMethod


+(id)ruleWithMinimumNumber:(NSInteger)arg0 maximumNumber:(NSInteger)arg1 nameSpace:(id)arg2 elementName:(id)arg3 objectClass:(Class)arg4 setterMethod:(SEL)arg5 ;
-(id)description;
-(id)initWithMinimumNumber:(NSInteger)arg0 maximumNumber:(NSInteger)arg1 nameSpace:(id)arg2 elementName:(id)arg3 objectClass:(Class)arg4 setterMethod:(SEL)arg5 ;


@end


#endif