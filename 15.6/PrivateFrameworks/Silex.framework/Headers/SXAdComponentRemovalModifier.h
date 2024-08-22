// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXADCOMPONENTREMOVALMODIFIER_H
#define SXADCOMPONENTREMOVALMODIFIER_H

@class NSString;
@protocol SXDOMModifying;

#import <Foundation/Foundation.h>


@interface SXAdComponentRemovalModifier : NSObject <SXDOMModifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)modifyDOM:(id)arg0 context:(id)arg1 ;
-(void)removeAdComponentsEmbeddedWithinContainer:(id)arg0 childComponents:(id)arg1 ;


@end


#endif