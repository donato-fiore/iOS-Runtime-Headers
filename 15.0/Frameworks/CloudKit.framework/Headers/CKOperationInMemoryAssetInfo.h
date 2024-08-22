// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKOPERATIONINMEMORYASSETINFO_H
#define CKOPERATIONINMEMORYASSETINFO_H

@class NSMutableData, NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface CKOperationInMemoryAssetInfo : NSObject

@property (retain, nonatomic) NSMutableData *assetContent; // ivar: _assetContent
@property (retain, nonatomic) NSMutableIndexSet *byteRanges; // ivar: _byteRanges


-(BOOL)isContiguous;
-(id)assetContentWithError:(*id)arg0 expectedSignature:(id)arg1 ;
-(id)init;
-(void)writeData:(id)arg0 atOffset:(NSUInteger)arg1 ;


@end


#endif