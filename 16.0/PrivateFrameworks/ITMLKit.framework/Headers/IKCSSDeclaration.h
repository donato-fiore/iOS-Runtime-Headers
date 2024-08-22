// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSDECLARATION_H
#define IKCSSDECLARATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IKCSSDeclaration : NSObject

@property (retain, nonatomic) NSString *aliasedName; // ivar: _aliasedName
@property BOOL important; // ivar: _important
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) _NSRange nameRange; // ivar: _nameRange
@property (nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSString *stringValue;
@property NSUInteger type; // ivar: _type
@property (nonatomic) _NSRange valueRange; // ivar: _valueRange


+(id)typeString:(NSUInteger)arg0 ;
-(id)description;


@end


#endif