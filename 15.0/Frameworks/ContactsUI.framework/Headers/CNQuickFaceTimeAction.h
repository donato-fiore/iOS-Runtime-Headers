// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNQUICKFACETIMEACTION_H
#define CNQUICKFACETIMEACTION_H



#import "CNQuickPropertyAction.h"

@interface CNQuickFaceTimeAction : CNQuickPropertyAction

@property (nonatomic) BOOL audioOnly; // ivar: _audioOnly


+(id)defaultFaceTimeAudioTitle;
+(id)defaultFaceTimeTitle;
-(NSUInteger)score;
-(id)_coreDuetInteractionMechanisms;
-(id)_coreDuetValue;
-(id)category;
-(id)identifier;
-(id)subtitleForContext:(NSInteger)arg0 ;
-(id)titleForContext:(NSInteger)arg0 ;
-(void)performWithCompletionBlock:(id)arg0 ;


@end


#endif