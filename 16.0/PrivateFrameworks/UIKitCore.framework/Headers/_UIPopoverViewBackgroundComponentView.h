// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOPOVERVIEWBACKGROUNDCOMPONENTVIEW_H
#define _UIPOPOVERVIEWBACKGROUNDCOMPONENTVIEW_H

@class NSMutableArray, NSString;


#import "UIView.h"

@interface _UIPopoverViewBackgroundComponentView : UIView {
    NSMutableArray *_replicants;
}


@property (copy, nonatomic) NSString *directionSelector; // ivar: _directionSelector


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_newReplicant;
-(id)replicate;
-(void)updateReplicants;


@end


#endif