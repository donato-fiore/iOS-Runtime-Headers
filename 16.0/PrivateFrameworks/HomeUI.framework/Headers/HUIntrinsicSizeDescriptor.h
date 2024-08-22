// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUINTRINSICSIZEDESCRIPTOR_H
#define HUINTRINSICSIZEDESCRIPTOR_H

@class NSNumber, NSString;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HUIntrinsicSizeDescriptor : NSObject <NAIdentifiable>



@property (readonly, copy, nonatomic) NSNumber *aspectRatio; // ivar: _aspectRatio
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger flexType; // ivar: _flexType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize intrinsicSize; // ivar: _intrinsicSize
@property (readonly) Class superclass;


+(id)descriptorWithAspectRatio:(CGFloat)arg0 ;
+(id)descriptorWithIntrinsicSize:(struct CGSize )arg0 flexType:(NSUInteger)arg1 ;
+(id)na_identity;
+(id)noIntrinsicSizeDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithIntrinsicSize:(struct CGSize )arg0 flexType:(NSUInteger)arg1 aspectRatio:(id)arg2 ;


@end


#endif