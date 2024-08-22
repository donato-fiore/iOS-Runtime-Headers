// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGFOCUSABLEVIEWCONFIGURATION_H
#define PXGFOCUSABLEVIEWCONFIGURATION_H

@class NSString;
@protocol PXGViewUserData, PXGFocusableViewDelegate;

#import <Foundation/Foundation.h>


@interface PXGFocusableViewConfiguration : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName; // ivar: _debugName
@property (weak, nonatomic) NSObject<PXGFocusableViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger focusability; // ivar: _focusability
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif