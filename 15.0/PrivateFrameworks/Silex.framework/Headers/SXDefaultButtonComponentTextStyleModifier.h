// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDEFAULTBUTTONCOMPONENTTEXTSTYLEMODIFIER_H
#define SXDEFAULTBUTTONCOMPONENTTEXTSTYLEMODIFIER_H

@class NSString;
@protocol SXDOMModifying;

#import <Foundation/Foundation.h>


@interface SXDefaultButtonComponentTextStyleModifier : NSObject <SXDOMModifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldReturnUnmodifiedDOM; // ivar: _shouldReturnUnmodifiedDOM
@property (readonly) Class superclass;


-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif