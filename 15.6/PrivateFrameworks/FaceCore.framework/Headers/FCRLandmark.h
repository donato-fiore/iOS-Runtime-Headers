// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRLANDMARK_H
#define FCRLANDMARK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCRLandmark : NSObject

@property (readonly) NSUInteger pointCount; // ivar: pointCount
@property (readonly) *CGPoint points; // ivar: points
@property (readonly) NSString *type; // ivar: type


+(id)landmarkWithType:(id)arg0 pointCount:(NSUInteger)arg1 points:(struct CGPoint *)arg2 ;
-(id)initWithType:(id)arg0 pointCount:(NSUInteger)arg1 points:(struct CGPoint *)arg2 ;
-(void)dealloc;


@end


#endif