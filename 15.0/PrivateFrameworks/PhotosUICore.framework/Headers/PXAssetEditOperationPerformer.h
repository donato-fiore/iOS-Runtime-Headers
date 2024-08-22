// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETEDITOPERATIONPERFORMER_H
#define PXASSETEDITOPERATIONPERFORMER_H

@class NSProgress, NSString;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXAssetEditOperationPerformer : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)init;
-(id)initWithEditOperationType:(id)arg0 asset:(id)arg1 ;
-(void)performEditOperationWithCompletionHandler:(id)arg0 ;


@end


#endif