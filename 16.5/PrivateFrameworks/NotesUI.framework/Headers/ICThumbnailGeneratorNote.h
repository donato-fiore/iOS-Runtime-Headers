// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILGENERATORNOTE_H
#define ICTHUMBNAILGENERATORNOTE_H

@protocol OS_dispatch_queue;


#import "ICThumbnailGenerator.h"

@interface ICThumbnailGeneratorNote : ICThumbnailGenerator

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (nonatomic) CGFloat margin; // ivar: _margin
@property (nonatomic) CGFloat maximumWidth; // ivar: _maximumWidth


-(id)generateThumbnailImageWithNote:(id)arg0 configuration:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg0 ;
-(void)generateThumbnailWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif