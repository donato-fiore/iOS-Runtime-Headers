// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDESCRIPTIONBUILDER_H
#define PLDESCRIPTIONBUILDER_H

@class NSMutableString, NSString;

#import <Foundation/Foundation.h>

#import "_PLDescriptionStyle.h"

@interface PLDescriptionBuilder : NSObject {
    NSObject *_object;
    NSMutableString *_description;
    NSInteger _indent;
    NSString *_indentString;
    _PLDescriptionStyle *_style;
    NSInteger _descriptionStyle;
}


@property (readonly, nonatomic) NSInteger indent;
@property (copy, nonatomic) NSString *separator; // ivar: _separator
@property (readonly, nonatomic) NSInteger style;


+(id)descriptionBuilderWithObject:(id)arg0 ;
+(id)plainDescriptionBuilder;
+(id)plainMultiLineDescriptionBuilder;
+(id)prettyMultiLineDescriptionBuilderWithObject:(id)arg0 indent:(NSInteger)arg1 ;
-(id)build;
-(id)initWithObject:(id)arg0 style:(NSInteger)arg1 indent:(NSInteger)arg2 ;
-(void)appendName:(id)arg0 boolValue:(BOOL)arg1 ;
-(void)appendName:(id)arg0 cgSize:(struct CGSize )arg1 ;
-(void)appendName:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(void)appendName:(id)arg0 floatValue:(float)arg1 ;
-(void)appendName:(id)arg0 integerValue:(NSInteger)arg1 ;
-(void)appendName:(id)arg0 object:(id)arg1 ;
-(void)appendName:(id)arg0 typeCode:(char *)arg1 value:(*void)arg2 ;
-(void)appendName:(id)arg0 unsignedIntegerValue:(NSUInteger)arg1 ;


@end


#endif