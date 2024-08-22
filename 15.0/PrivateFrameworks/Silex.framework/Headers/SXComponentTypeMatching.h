// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTTYPEMATCHING_H
#define SXCOMPONENTTYPEMATCHING_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SXComponentTypeMatching : NSObject

@property (readonly, nonatomic) NSMutableArray *descriptions; // ivar: _descriptions


-(id)init;
-(id)match:(id)arg0 ;
-(void)addDescription:(id)arg0 ;
-(void)removeDescription:(id)arg0 ;


@end


#endif