// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIALERTCONTROLLERDESCRIPTOR_H
#define UIALERTCONTROLLERDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIAlertControllerDescriptor : NSObject <NSCopying>



@property BOOL applicationIsFullscreen; // ivar: _applicationIsFullscreen
@property UIEdgeInsets containerViewSafeAreaInsets; // ivar: _containerViewSafeAreaInsets
@property BOOL hasContentViewController; // ivar: _hasContentViewController
@property BOOL hasHeaderContentViewController; // ivar: _hasHeaderContentViewController
@property BOOL hasMessage; // ivar: _hasMessage
@property BOOL hasTitle; // ivar: _hasTitle
@property NSInteger numberOfActions; // ivar: _numberOfActions


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif