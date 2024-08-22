// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADSTYLEMATRIXREFERENCE_H
#define OADSTYLEMATRIXREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADColor.h"

@interface OADStyleMatrixReference : NSObject <NSCopying>

 {
    NSUInteger mMatrixIndex;
    OADColor *mColor;
}




+(id)styleMatrixReferenceWithMatrixIndex:(NSUInteger)arg0 color:(id)arg1 ;
-(NSUInteger)matrixIndex;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMatrixIndex:(NSUInteger)arg0 color:(id)arg1 ;
-(void)setColor:(id)arg0 ;
-(void)setMatrixIndex:(NSUInteger)arg0 ;


@end


#endif