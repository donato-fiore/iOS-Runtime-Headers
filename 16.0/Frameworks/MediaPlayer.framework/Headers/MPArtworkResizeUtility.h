// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPARTWORKRESIZEUTILITY_H
#define MPARTWORKRESIZEUTILITY_H

@class NSOperationQueue, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPArtworkResizeUtility : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue; // ivar: _artworkResizingAccessQueue
@property (retain, nonatomic) NSOperationQueue *artworkResizingOperationQueue; // ivar: _artworkResizingOperationQueue
@property (retain, nonatomic) NSMapTable *artworkResizingOperations; // ivar: _artworkResizingOperations
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService


-(id)init;
-(id)initWithQualityOfService:(NSInteger)arg0 ;
-(id)resizeImage:(id)arg0 scaledFittingSize:(struct CGSize )arg1 useExactFittingSizeAsDestinationSize:(BOOL)arg2 saveToDestinationURL:(id)arg3 completionHandler:(id)arg4 ;
-(void)cancelResizeImage:(id)arg0 ;


@end


#endif