// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTEXTHIGHLIGHTRENDERINGDELEGATE_H
#define TSWPTEXTHIGHLIGHTRENDERINGDELEGATE_H

@class NSString, NSArray;
@protocol TSWPAdornmentLineRenderingDelegate;

#import <Foundation/Foundation.h>


@interface TSWPTextHighlightRenderingDelegate : NSObject <TSWPAdornmentLineRenderingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *highlights; // ivar: _highlights
@property (readonly) Class superclass;


-(BOOL)shouldRenderForLineDrawFlags:(NSUInteger)arg0 ;
-(id)initWithHighlights:(id)arg0 ;
-(struct CGColor *)cgColor;


@end


#endif