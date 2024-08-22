// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEOPTIONMIRROR_H
#define AEOPTIONMIRROR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AEOptionMirror : NSObject {
    NSDictionary *_rightOptionsByLeft;
    NSDictionary *_leftOptionsByRight;
}


@property (readonly, nonatomic) NSInteger leftClearMask;
@property (readonly, nonatomic) NSInteger rightClearMask;


-(NSInteger)leftOptionsFromRight:(NSInteger)arg0 ;
-(NSInteger)rightOptionsFromLeft:(NSInteger)arg0 ;
-(id)initWithMirroredOptions:(id)arg0 ;


@end


#endif