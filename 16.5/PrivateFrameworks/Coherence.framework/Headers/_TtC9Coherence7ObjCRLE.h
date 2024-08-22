// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9COHERENCE7OBJCRLE_H
#define _TTC9COHERENCE7OBJCRLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC9Coherence7ObjCRLE : NSObject {
    ? rle;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger rangeCount;


-(NSInteger)rangeCountIn:(struct _NSRange )arg0 ;
-(id)init;
-(void)enumerateRangesIn:(struct _NSRange )arg0 ;


@end


#endif