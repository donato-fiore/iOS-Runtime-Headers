// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIEDITORIALLINKLAYOUTREQUEST_H
#define SKUIEDITORIALLINKLAYOUTREQUEST_H

@class NSString, NSArray;
@protocol SKUILayoutRequest;

#import <Foundation/Foundation.h>


@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class layoutClass;
@property (copy, nonatomic) NSArray *links; // ivar: _links
@property (readonly) Class superclass;
@property (nonatomic) CGFloat width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif