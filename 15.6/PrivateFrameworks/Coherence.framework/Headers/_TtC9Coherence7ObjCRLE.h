// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COHERENCE7OBJCRLE_H
#define _TTC9COHERENCE7OBJCRLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC9Coherence7ObjCRLE : NSObject {
    ? rle;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger rangeCount;


-(id)init;
-(void)addMappingFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)enumerateRangesIn:(struct _NSRange )arg0 ;


@end


#endif