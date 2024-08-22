// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIPARSERESULT_H
#define VIPARSERESULT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VIVisualUnderstanding.h"

@interface VIParseResult : NSObject <NSCopying>



@property (readonly, nonatomic) VIVisualUnderstanding *visualUnderstanding; // ivar: _visualUnderstanding


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithVisualUnderstanding:(id)arg0 ;


@end


#endif