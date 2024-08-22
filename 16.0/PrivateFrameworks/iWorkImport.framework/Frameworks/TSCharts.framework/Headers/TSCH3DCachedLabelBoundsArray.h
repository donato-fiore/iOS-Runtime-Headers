// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCACHEDLABELBOUNDSARRAY_H
#define TSCH3DCACHEDLABELBOUNDSARRAY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCH3DCachedLabelBoundsArray : NSObject {
    NSMutableArray *_elements;
}


@property (nonatomic) tvec3<float> offset; // ivar: _offset


-(BOOL)isEmpty;
-(id)init;
-(void)addLabelBounds:(id)arg0 ;
-(void)clear;
-(void)enumerateLabelBoundsUsingBlock:(id)arg0 ;


@end


#endif