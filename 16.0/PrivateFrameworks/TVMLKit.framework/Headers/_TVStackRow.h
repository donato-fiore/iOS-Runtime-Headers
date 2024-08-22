// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVSTACKROW_H
#define _TVSTACKROW_H


#import <Foundation/Foundation.h>


@interface _TVStackRow : NSObject

@property (nonatomic, getter=isBounded) BOOL bounded; // ivar: _bounded
@property (nonatomic, getter=isHosted) BOOL hosted; // ivar: _hosted
@property (nonatomic) TVRowMetrics rowMetrics; // ivar: _rowMetrics
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif