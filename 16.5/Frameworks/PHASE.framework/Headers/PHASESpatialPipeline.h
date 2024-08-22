// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASESPATIALPIPELINE_H
#define PHASESPATIALPIPELINE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PHASESpatialPipeline : NSObject

@property (readonly, copy) NSDictionary *entries; // ivar: _entries
@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags


+(BOOL)addToDictionary:(id)arg0 add:(BOOL)arg1 key:(id)arg2 ;
+(id)new;
-(id)init;
-(id)initWithFlags:(NSUInteger)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;


@end


#endif