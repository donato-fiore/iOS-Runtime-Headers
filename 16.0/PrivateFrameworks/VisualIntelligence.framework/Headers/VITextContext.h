// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VITEXTCONTEXT_H
#define VITEXTCONTEXT_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VITextContext : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *normalizedBoundingBoxes; // ivar: _normalizedBoundingBoxes
@property (readonly, copy, nonatomic) NSString *surroundingText; // ivar: _surroundingText


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSurroundingText:(id)arg0 normalizedBoundingBoxes:(id)arg1 ;


@end


#endif