// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTENTINSETSENVIRONMENT_H
#define _UICONTENTINSETSENVIRONMENT_H

@class NSString;
@protocol _UIContentInsetsEnvironment, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIContentInsetsEnvironment : NSObject <_UIContentInsetsEnvironment, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDirectionalEdgeInsets effectiveInsets;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger insetReference; // ivar: _insetReference
@property (nonatomic) NSDirectionalEdgeInsets layoutMarginsInsets; // ivar: _layoutMarginsInsets
@property (nonatomic) NSDirectionalEdgeInsets readableContentInsets; // ivar: _readableContentInsets
@property (nonatomic) NSDirectionalEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly) Class superclass;


+(id)insetEnvironmentForInsetReference:(NSInteger)arg0 safeAreaInsets:(struct NSDirectionalEdgeInsets )arg1 layoutMarginsInsets:(struct NSDirectionalEdgeInsets )arg2 readableContentInsets:(struct NSDirectionalEdgeInsets )arg3 ;
+(id)insetEnvironmentForView:(id)arg0 insetReference:(NSInteger)arg1 ;
+(id)insetEnvironmentFromParentEnvironment:(id)arg0 insetReference:(NSInteger)arg1 ;
+(id)nullEnvironment;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInsetReference:(NSInteger)arg0 safeAreaInsets:(struct NSDirectionalEdgeInsets )arg1 layoutMarginsInsets:(struct NSDirectionalEdgeInsets )arg2 readableContentInsets:(struct NSDirectionalEdgeInsets )arg3 ;
-(id)layoutContainerForContainerSize:(struct CGSize )arg0 layoutAxis:(NSUInteger)arg1 ;
-(id)layoutContainerForInsetReference:(NSInteger)arg0 containerSize:(struct CGSize )arg1 layoutAxis:(NSUInteger)arg2 ;


@end


#endif