// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSTOKEN_H
#define IKCSSTOKEN_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface IKCSSToken : NSObject

@property (nonatomic) unsigned short charValue; // ivar: _charValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) NSInteger type; // ivar: _type


-(id)description;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif