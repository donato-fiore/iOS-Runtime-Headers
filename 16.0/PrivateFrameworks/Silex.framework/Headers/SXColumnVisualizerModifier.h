// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOLUMNVISUALIZERMODIFIER_H
#define SXCOLUMNVISUALIZERMODIFIER_H

@class NSString;
@protocol SXDOMModifying;

#import <Foundation/Foundation.h>


@interface SXColumnVisualizerModifier : NSObject <SXDOMModifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)componentLayoutWithJSON:(id)arg0 ;
-(id)componentStyleWithJSON:(id)arg0 ;
-(id)containerComponentWithJSON:(id)arg0 ;
-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif