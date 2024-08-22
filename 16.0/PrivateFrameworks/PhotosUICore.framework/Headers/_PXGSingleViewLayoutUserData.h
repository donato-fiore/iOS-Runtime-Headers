// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXGSINGLEVIEWLAYOUTUSERDATA_H
#define _PXGSINGLEVIEWLAYOUTUSERDATA_H

@class UIView, NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface _PXGSingleViewLayoutUserData : NSObject <PXGViewUserData>



@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentView:(id)arg0 ;


@end


#endif