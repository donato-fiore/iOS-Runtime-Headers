// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGVIEWPAYLOAD_H
#define PXGVIEWPAYLOAD_H

@protocol NSCopying, PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXGViewPayload : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSObject<PXGViewUserData> *userData; // ivar: _userData
@property (readonly, nonatomic) Class viewClass; // ivar: _viewClass


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewClass:(Class)arg0 userData:(id)arg1 ;


@end


#endif