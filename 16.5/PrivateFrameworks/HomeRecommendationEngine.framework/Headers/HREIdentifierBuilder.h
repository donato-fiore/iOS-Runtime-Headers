// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HREIDENTIFIERBUILDER_H
#define HREIDENTIFIERBUILDER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HREIdentifierBuilder : NSObject

@property (retain, nonatomic) NSString *baseIdentifier; // ivar: _baseIdentifier
@property (readonly, nonatomic) NSString *composedString; // ivar: _composedString
@property (readonly, nonatomic) NSMutableDictionary *keyValues; // ivar: _keyValues


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBaseIdentifier:(id)arg0 ;
-(id)makeComposedString;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif