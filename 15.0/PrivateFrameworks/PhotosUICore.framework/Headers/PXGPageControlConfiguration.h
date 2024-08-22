// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGPAGECONTROLCONFIGURATION_H
#define PXGPAGECONTROLCONFIGURATION_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXGPageControlConfiguration : NSObject <PXGViewUserData>



@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic) NSInteger currentPage; // ivar: _currentPage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfPages; // ivar: _numberOfPages
@property (readonly) Class superclass;
@property (weak, nonatomic) id *target; // ivar: _target


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif