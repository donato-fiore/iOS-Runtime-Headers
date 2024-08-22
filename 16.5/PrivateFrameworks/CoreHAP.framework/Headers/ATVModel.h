// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATVMODEL_H
#define ATVMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATVModel : NSObject

@property (retain) NSDictionary *atvLUT; // ivar: _atvLUT


+(NSUInteger)atvStateFromState:(struct BTStatus *)arg0 ;
+(void)addTuple:(id)arg0 ToLUT:(id)arg1 ;
-(id)findTupleForATVState:(NSUInteger)arg0 ;
-(id)init;


@end


#endif