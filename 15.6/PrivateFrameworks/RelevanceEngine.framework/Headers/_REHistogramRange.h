// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REHISTOGRAMRANGE_H
#define _REHISTOGRAMRANGE_H

@class NSString;
@protocol NSCopying, REComparable;

#import <Foundation/Foundation.h>


@interface _REHistogramRange : NSObject <NSCopying, REComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger max; // ivar: _max
@property (readonly, nonatomic) NSUInteger mid; // ivar: _mid
@property (readonly, nonatomic) NSUInteger min; // ivar: _min
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMin:(NSUInteger)arg0 max:(NSUInteger)arg1 ;
-(id)initWithValue:(NSUInteger)arg0 binningSize:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif