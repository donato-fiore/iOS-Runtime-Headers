// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLOFFSET_H
#define TMLOFFSET_H

@protocol TMLOffsetJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLOffset : NSObject <TMLOffsetJSExports, NSCopying>



@property (readonly, nonatomic) CGFloat horizontal;
@property (readonly, nonatomic) UIOffset offset; // ivar: _offset
@property (readonly, nonatomic) CGFloat vertical;


+(void)initializeJSContext:(id)arg0 ;
-(id)UIOffsetValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithOffset:(struct UIOffset )arg0 ;


@end


#endif