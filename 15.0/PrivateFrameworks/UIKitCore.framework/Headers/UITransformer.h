// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITRANSFORMER_H
#define UITRANSFORMER_H

@class NSMutableArray, NSString, NSArray;
@protocol BSDescriptionProviding, NSMutableCopying;


#import "UITransform.h"

@interface UITransformer : UITransform <BSDescriptionProviding, NSMutableCopying>

 {
    NSMutableArray *_transformReasonAssociations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *transforms; // ivar: _transforms


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithTransformer:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif