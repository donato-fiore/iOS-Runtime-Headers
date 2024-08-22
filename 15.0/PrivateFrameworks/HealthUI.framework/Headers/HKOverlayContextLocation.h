// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOVERLAYCONTEXTLOCATION_H
#define HKOVERLAYCONTEXTLOCATION_H


#import <Foundation/Foundation.h>


@interface HKOverlayContextLocation : NSObject

@property (readonly, nonatomic) NSInteger contextItemIndex; // ivar: _contextItemIndex
@property (readonly, nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithSectionIndex:(NSInteger)arg0 contextItemIndex:(NSInteger)arg1 ;


@end


#endif