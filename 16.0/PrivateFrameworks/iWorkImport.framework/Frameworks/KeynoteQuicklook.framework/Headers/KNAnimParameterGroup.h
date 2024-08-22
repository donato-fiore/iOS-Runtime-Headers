// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMPARAMETERGROUP_H
#define KNANIMPARAMETERGROUP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "KNAnimParameterSavedGroup.h"

@interface KNAnimParameterGroup : NSObject

@property (copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) KNAnimParameterSavedGroup *savedGroup; // ivar: _savedGroup


+(id)easeInEaseOutPath;
+(id)easeInPath;
+(id)easeOutPath;
+(id)linearPath;
+(id)mediaTimingFunctionForPath:(id)arg0 reversed:(BOOL)arg1 ;
+(id)parameterGroupForName:(id)arg0 ;
+(void)p_loadAllParametersIfNecessary;
-(BOOL)boolForKey:(id)arg0 ;
-(CGFloat)doubleForAnimationCurve:(id)arg0 atPercent:(CGFloat)arg1 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(id)initWithFileName:(id)arg0 ;
-(id)mediaTimingFunctionForAnimationCurve:(id)arg0 ;
-(id)mediaTimingFunctionForAnimationCurve:(id)arg0 reversed:(BOOL)arg1 ;
-(id)pathForAnimationCurve:(id)arg0 ;
-(void)p_loadParameters;


@end


#endif