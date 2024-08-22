// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDESCRIPTIONBUILDER_H
#define CNDESCRIPTIONBUILDER_H

@class NSMutableString, NSString;

#import <Foundation/Foundation.h>


@interface CNDescriptionBuilder : NSObject {
    NSObject *_object;
    NSMutableString *_description;
}


@property (copy, nonatomic) NSString *separator; // ivar: _separator


+(id)descriptionBuilderWithObject:(id)arg0 ;
+(id)descriptionForBool:(BOOL)arg0 ;
+(id)descriptionForObject:(id)arg0 withNamesAndObjects:(id)arg1 ;
-(id)appendKey:(id)arg0 ;
-(id)appendKeys:(id)arg0 ;
-(id)appendName:(id)arg0 boolValue:(BOOL)arg1 ;
-(id)appendName:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(id)appendName:(id)arg0 intValue:(int)arg1 ;
-(id)appendName:(id)arg0 integerValue:(NSInteger)arg1 ;
-(id)appendName:(id)arg0 object:(id)arg1 ;
-(id)appendName:(id)arg0 pointerValue:(*void)arg1 ;
-(id)appendName:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)appendName:(id)arg0 selector:(SEL)arg1 ;
-(id)appendName:(id)arg0 timeInterval:(CGFloat)arg1 ;
-(id)appendName:(id)arg0 u_int64_t:(NSUInteger)arg1 ;
-(id)appendName:(id)arg0 unsignedInteger:(NSUInteger)arg1 ;
-(id)appendNamesAndObjects:(id)arg0 ;
-(id)appendNamesAndObjects:(id)arg0 args:(char *)arg1 ;
-(id)appendObject:(id)arg0 withName:(id)arg1 ;
-(id)appendableDescriptionOfValue:(id)arg0 ;
-(id)build;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(void)tryAppendKey:(id)arg0 ;


@end


#endif