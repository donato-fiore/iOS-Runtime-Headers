// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPENCILTOUCHDETECTION_H
#define PKPENCILTOUCHDETECTION_H

@protocol PKPencilTouchDetectionDelegate;

#import <Foundation/Foundation.h>


@interface PKPencilTouchDetection : NSObject

@property (weak, nonatomic) NSObject<PKPencilTouchDetectionDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)dealloc;
-(void)didUpdateWithUserInfo:(id)arg0 ;
-(void)pencilType:(NSInteger)arg0 hasRecentlyBeenUsedWithCompletionHandler:(id)arg1 ;


@end


#endif