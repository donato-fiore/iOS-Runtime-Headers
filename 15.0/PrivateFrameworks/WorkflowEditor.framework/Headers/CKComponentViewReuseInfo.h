// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPONENTVIEWREUSEINFO_H
#define CKCOMPONENTVIEWREUSEINFO_H

@class UIView, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKComponentViewReuseInfo : NSObject {
    UIView *_view;
    id *_didEnterReusePoolBlock;
    id *_willLeaveReusePoolBlock;
    NSMutableArray *_childViewInfos;
    BOOL _hidden;
    BOOL _ancestorHidden;
}




// -(id)initWithView:(id)arg0 didEnterReusePoolBlock:(id)arg1 willLeaveReusePoolBlock:(unk)arg2  ;
-(void)ancestorDidHide;
-(void)ancestorWillUnhide;
-(void)didHide;
-(void)registerChildViewInfo:(id)arg0 ;
-(void)willUnhide;


@end


#endif