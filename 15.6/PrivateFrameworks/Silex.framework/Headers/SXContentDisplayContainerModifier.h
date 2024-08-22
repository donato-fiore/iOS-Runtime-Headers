// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONTENTDISPLAYCONTAINERMODIFIER_H
#define SXCONTENTDISPLAYCONTAINERMODIFIER_H

@class NSMutableDictionary, NSString;
@protocol SXDOMModifying;

#import <Foundation/Foundation.h>


@interface SXContentDisplayContainerModifier : NSObject <SXDOMModifying>



@property (readonly, nonatomic) NSMutableDictionary *containers; // ivar: _containers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)ensureWrappingContainerComponentForComponents:(id)arg0 parentComponent:(id)arg1 ;
-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif