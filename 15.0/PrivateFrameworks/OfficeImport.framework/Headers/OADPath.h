// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADPATH_H
#define OADPATH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OADPath : NSObject {
    CGSize mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}




-(BOOL)stroked;
-(NSUInteger)elementCount;
-(id)description;
-(id)elementAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(int)fillMode;
-(struct CGSize )size;
-(void)addElement:(id)arg0 ;
-(void)setFillMode:(int)arg0 ;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setStroked:(BOOL)arg0 ;


@end


#endif