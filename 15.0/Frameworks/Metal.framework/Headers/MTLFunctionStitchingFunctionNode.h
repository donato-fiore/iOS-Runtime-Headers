// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONSTITCHINGFUNCTIONNODE_H
#define MTLFUNCTIONSTITCHINGFUNCTIONNODE_H

@class NSArray, NSString;
@protocol MTLFunctionStitchingNode;

#import <Foundation/Foundation.h>


@interface MTLFunctionStitchingFunctionNode : NSObject <MTLFunctionStitchingNode>



@property (copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (copy, nonatomic) NSArray *controlDependencies; // ivar: _controlDependencies
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 arguments:(id)arg1 controlDependencies:(id)arg2 ;
-(void)dealloc;


@end


#endif