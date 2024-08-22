// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMPROCESSINGBLOCKER_H
#define ICDOCCAMPROCESSINGBLOCKER_H

@class NSMutableSet;
@protocol ICDocCamProcessingBlockerDelegate;

#import <Foundation/Foundation.h>


@interface ICDocCamProcessingBlocker : NSObject

@property (retain, nonatomic) NSMutableSet *blockerSet; // ivar: _blockerSet
@property (weak, nonatomic) NSObject<ICDocCamProcessingBlockerDelegate> *delegate; // ivar: _delegate


-(BOOL)blocked;
-(id)initWithDelegate:(id)arg0 ;
-(void)addBlockerOfType:(id)arg0 clearRectangles:(BOOL)arg1 clearQueue:(BOOL)arg2 ;
-(void)removeBlockerOfType:(id)arg0 ;


@end


#endif