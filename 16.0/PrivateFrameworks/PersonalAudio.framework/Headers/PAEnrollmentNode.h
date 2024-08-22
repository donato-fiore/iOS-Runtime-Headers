// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAENROLLMENTNODE_H
#define PAENROLLMENTNODE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PAConfiguration.h"

@interface PAEnrollmentNode : NSObject

@property (retain, nonatomic) PAConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSString *heading; // ivar: _heading
@property (nonatomic) BOOL hideVisualizer; // ivar: _hideVisualizer
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSString *instructions; // ivar: _instructions
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *options; // ivar: _options
@property (nonatomic) NSUInteger section; // ivar: _section
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) NSArray *stimuli; // ivar: _stimuli
@property (nonatomic) NSUInteger totalSteps; // ivar: _totalSteps
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)nodeWithSection:(NSUInteger)arg0 andType:(NSUInteger)arg1 comparing:(NSUInteger)arg2 with:(NSUInteger)arg3 ;
+(id)nodeWithSection:(NSUInteger)arg0 type:(NSUInteger)arg1 andConfiguration:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)key;
-(id)progressDescription;


@end


#endif