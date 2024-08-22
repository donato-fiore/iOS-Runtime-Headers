// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRUIFSTACK_H
#define SRUIFSTACK_H

@class NSArray, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SRUIFStack : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic, getter=_elements) NSMutableArray *elements; // ivar: _elements
@property (readonly, nonatomic) id *topObject;


-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithStack:(id)arg0 ;


@end


#endif