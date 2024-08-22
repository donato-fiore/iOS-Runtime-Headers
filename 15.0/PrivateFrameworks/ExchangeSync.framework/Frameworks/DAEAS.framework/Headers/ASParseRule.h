// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASPARSERULE_H
#define ASPARSERULE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ASParseRule : NSObject {
    int _minimumNumber;
    int _maximumNumber;
    int _codePage;
    int _token;
    Class _objectClass;
    SEL _setterMethod;
    NSInteger _dataclass;
    NSDictionary *_subclassRuleSet;
    NSDictionary *_callbackDict;
    NSDictionary *_streamCallbackDict;
}




-(Class)objectClass;
-(NSInteger)dataclass;
-(SEL)setterMethod;
-(id)callbackDict;
-(id)initWithMinimumNumber:(int)arg0 maximumNumber:(int)arg1 codePage:(int)arg2 token:(int)arg3 objectClass:(Class)arg4 setterMethod:(SEL)arg5 dataclass:(NSInteger)arg6 callbackDict:(id)arg7 streamCallbackDict:(id)arg8 subclassRuleSet:(id)arg9 ;
-(id)streamCallbackDict;
-(id)subclassRuleSet;
-(int)codePage;
-(int)maximumNumber;
-(int)minimumNumber;
-(int)token;


@end


#endif