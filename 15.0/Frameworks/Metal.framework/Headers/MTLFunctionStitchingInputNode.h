// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONSTITCHINGINPUTNODE_H
#define MTLFUNCTIONSTITCHINGINPUTNODE_H

@class NSString;
@protocol MTLFunctionStitchingNode;

#import <Foundation/Foundation.h>


@interface MTLFunctionStitchingInputNode : NSObject <MTLFunctionStitchingNode>



@property (nonatomic) NSUInteger argumentIndex; // ivar: _argumentIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithArgumentIndex:(NSUInteger)arg0 ;


@end


#endif