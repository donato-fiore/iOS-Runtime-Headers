// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTYPEINTERNAL_H
#define MTLTYPEINTERNAL_H



#import "MTLType.h"

@interface MTLTypeInternal : MTLType {
    NSUInteger _dataType;
}




-(NSUInteger)dataType;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDataType:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif