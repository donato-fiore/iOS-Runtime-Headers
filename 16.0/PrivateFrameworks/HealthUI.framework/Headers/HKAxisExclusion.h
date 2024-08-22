// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKAXISEXCLUSION_H
#define HKAXISEXCLUSION_H

@class NSString, NSMutableArray;
@protocol HKGraphRendererExclusion;

#import <Foundation/Foundation.h>


@interface HKAxisExclusion : NSObject <HKGraphRendererExclusion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *excludedRects; // ivar: _excludedRects
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)excludeRect:(struct CGRect )arg0 ;
-(id)init;


@end


#endif