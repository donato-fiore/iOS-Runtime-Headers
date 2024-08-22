// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABSNAPSHOTGENERATOR_H
#define TABSNAPSHOTGENERATOR_H

@class NSMutableArray;
@protocol TabSnapshotGeneratorDelegate;

#import <Foundation/Foundation.h>


@interface TabSnapshotGenerator : NSObject {
    NSMutableArray *_requestQueue;
}


@property (weak, nonatomic) NSObject<TabSnapshotGeneratorDelegate> *delegate; // ivar: _delegate


+(id)_snapshotRenderingQueue;
-(BOOL)contentShouldUnderlapTopBackdropForContentProvider:(id)arg0 ;
-(id)_renderView:(id)arg0 afterScreenUpdates:(BOOL)arg1 ;
-(id)backgroundColorForContentProvider:(id)arg0 ;
-(id)init;
-(id)renderSnapshotWithSize:(struct CGSize )arg0 backgroundColor:(id)arg1 topBackdropHeight:(CGFloat)arg2 options:(NSUInteger)arg3 drawing:(id)arg4 ;
-(struct CGRect )contentRectForContentProvider:(id)arg0 withSnapshotSize:(struct CGSize )arg1 ;
-(void)_beginNextItemIfIdle;
-(void)_didFinishItem:(id)arg0 withImage:(id)arg1 ;
-(void)_snapshotItem:(id)arg0 ;
-(void)snapshotWithRequest:(id)arg0 contentProvider:(id)arg1 completion:(id)arg2 ;


@end


#endif