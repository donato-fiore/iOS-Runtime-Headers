// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEGMENTEDCONTROLSEGMENTHOVERIDENTIFIER_H
#define _UISEGMENTEDCONTROLSEGMENTHOVERIDENTIFIER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UISegmentedControlSegmentHoverIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) BOOL isSelected; // ivar: _isSelected


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIndex:(NSInteger)arg0 selected:(BOOL)arg1 ;


@end


#endif