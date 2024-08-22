// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSDOWNLOADOPERATIONINFO_H
#define STSDOWNLOADOPERATIONINFO_H

@class NSMutableArray, NSArray, NSOperation;

#import <Foundation/Foundation.h>


@interface STSDownloadOperationInfo : NSObject {
    NSMutableArray *_beginBlocks;
    NSMutableArray *_progressBlocks;
    NSMutableArray *_completionBlocks;
}


@property (readonly, copy, nonatomic) NSArray *completionBlocks;
@property (readonly, nonatomic) NSOperation *operation; // ivar: _operation
@property (readonly, copy, nonatomic) NSArray *progressBlocks;


-(id)beginBlocks;
// -(id)initWithOperation:(id)arg0 begin:(id)arg1 progress:(unk)arg2 completion:(id)arg3  ;
-(void)addBegin:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)addProgress:(id)arg0 ;


@end


#endif