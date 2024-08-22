// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLACTIVECALLVIEWSWIFT_H
#define SLACTIVECALLVIEWSWIFT_H

@protocol SLActiveCallViewDelegateSwift;


#import "SLRemoteView.h"

@interface SLActiveCallViewSwift : SLRemoteView {
    ? activeCallSubscriber;
}


@property (nonatomic, weak) NSObject<SLActiveCallViewDelegateSwift> *delegate; // ivar: delegate
@property (nonatomic) BOOL hasActiveCall; // ivar: hasActiveCall


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMaxWidth:(CGFloat)arg0 ;
-(id)initWithServiceProxyClass:(Class)arg0 maxWidth:(CGFloat)arg1 ;
-(id)makePlaceholderSlotContentForStyle:(id)arg0 ;
-(void)dealloc;
-(void)renderRemoteContentForLayerContextID:(NSInteger)arg0 style:(id)arg1 yield:(id)arg2 ;


@end


#endif