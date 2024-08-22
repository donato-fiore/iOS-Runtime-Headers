// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOVERLAYCONTEXTLOCATION_H
#define HKOVERLAYCONTEXTLOCATION_H


#import <Foundation/Foundation.h>


@interface HKOverlayContextLocation : NSObject

@property (readonly, nonatomic) NSInteger containerIndex; // ivar: _containerIndex
@property (readonly, nonatomic) NSInteger itemIndex; // ivar: _itemIndex
@property (readonly, nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithContainerIndex:(NSInteger)arg0 sectionIndex:(NSInteger)arg1 itemIndex:(NSInteger)arg2 ;


@end


#endif