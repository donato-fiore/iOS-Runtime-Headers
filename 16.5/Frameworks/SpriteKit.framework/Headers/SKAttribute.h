// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKATTRIBUTE_H
#define SKATTRIBUTE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKAttribute : NSObject <NSSecureCoding>

 {
    NSInteger _type;
    NSString *_name;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _nameString;
}


@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)attributeWithName:(id)arg0 type:(NSInteger)arg1 ;
-(*void)getNameString;
-(BOOL)isEqualToAttribute:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif