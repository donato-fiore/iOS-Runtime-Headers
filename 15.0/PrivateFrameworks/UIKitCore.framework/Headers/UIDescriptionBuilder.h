// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDESCRIPTIONBUILDER_H
#define UIDESCRIPTIONBUILDER_H

@class NSMutableString, NSString;

#import <Foundation/Foundation.h>


@interface UIDescriptionBuilder : NSObject

@property (retain, nonatomic) NSMutableString *descriptionString; // ivar: _descriptionString
@property (nonatomic) NSObject *object; // ivar: _object
@property (copy, nonatomic) NSString *separator; // ivar: _separator
@property (readonly, nonatomic) NSString *string;


+(id)descriptionBuilderWithObject:(id)arg0 ;
+(id)descriptionForObject:(id)arg0 keys:(id)arg1 ;
+(id)descriptionForObject:(id)arg0 namesAndObjects:(id)arg1 ;
-(id)appendKey:(id)arg0 ;
-(id)appendKeys:(id)arg0 ;
-(id)appendName:(id)arg0 boolValue:(BOOL)arg1 ;
-(id)appendName:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(id)appendName:(id)arg0 intValue:(int)arg1 ;
-(id)appendName:(id)arg0 integerValue:(NSInteger)arg1 ;
-(id)appendName:(id)arg0 object:(id)arg1 ;
-(id)appendName:(id)arg0 object:(id)arg1 usingLightweightDescription:(BOOL)arg2 ;
-(id)appendName:(id)arg0 pointerValue:(*void)arg1 ;
-(id)appendName:(id)arg0 selector:(SEL)arg1 ;
-(id)appendName:(id)arg0 unsignedInteger:(NSUInteger)arg1 ;
-(id)appendNamesAndObjects:(id)arg0 ;
-(id)appendObject:(id)arg0 withName:(id)arg1 ;
-(id)initWithObject:(id)arg0 ;
-(void)tryAppendKey:(id)arg0 ;


@end


#endif