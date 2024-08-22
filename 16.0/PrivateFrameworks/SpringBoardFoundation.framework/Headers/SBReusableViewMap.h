// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREUSABLEVIEWMAP_H
#define SBREUSABLEVIEWMAP_H

@class NSMapTable, NSString;
@protocol BSDescriptionProviding, SBReusableViewMapDelegate;

#import <Foundation/Foundation.h>


@interface SBReusableViewMap : NSObject <BSDescriptionProviding>

 {
    NSMapTable *_recycledViewsByClass;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBReusableViewMapDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger recycledViewCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger viewRecyclingCount;


-(BOOL)isViewRecycled:(id)arg0 ;
-(id)dequeueReusableViewOfClass:(Class)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)newViewOfClass:(Class)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)viewOfClass:(Class)arg0 ;
-(void)addRecycledViewsOfClass:(Class)arg0 upToCount:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enumerateRecycledViewsUsingBlock:(id)arg0 ;
-(void)invalidate;
-(void)purgeAllViews;
-(void)purgeView:(id)arg0 ;
-(void)purgeViewsForClass:(Class)arg0 ;
-(void)recycleView:(id)arg0 ;


@end


#endif