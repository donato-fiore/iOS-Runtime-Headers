// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDCHARACTERCLASS_H
#define WBSPASSWORDCHARACTERCLASS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSPasswordCharacterClass : NSObject

@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(id)asciiPrintableCharacterClass;
+(id)customCharacterClassWithValue:(id)arg0 ;
+(id)digitCharacterClass;
+(id)lowercaseCharacterClass;
+(id)namedCharacterClassWithType:(NSInteger)arg0 ;
+(id)specialCharacterClass;
+(id)unicodeCharacterClass;
+(id)uppercaseCharacterClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithType:(NSInteger)arg0 value:(id)arg1 ;


@end


#endif