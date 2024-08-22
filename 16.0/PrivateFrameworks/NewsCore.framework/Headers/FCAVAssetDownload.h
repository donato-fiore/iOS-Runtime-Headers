// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCAVASSETDOWNLOAD_H
#define FCAVASSETDOWNLOAD_H

@class NSString, NSMutableArray;
@protocol FCOperationCanceling, FCOperationIdentifying, FCOperationCanceling><FCOperationIdentifying;

#import <Foundation/Foundation.h>


@interface FCAVAssetDownload : NSObject <FCOperationCanceling, FCOperationIdentifying>

 {
    NSString *_assetID;
    id<FCOperationCanceling><FCOperationIdentifying> *_underlyingOperation;
    NSMutableArray *_completionHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *longOperationDescription;
@property (readonly, nonatomic) NSString *shortOperationDescription;
@property (readonly) Class superclass;


-(void)cancel;


@end


#endif