// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPMODELLIBRARYKEEPLOCALCHANGEREQUESTUPDATEITEMOPERATION_H
#define _MPMODELLIBRARYKEEPLOCALCHANGEREQUESTUPDATEITEMOPERATION_H



#import "MPAsyncOperation.h"
#import "MPMediaItem.h"

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation

@property (nonatomic) NSInteger keepLocal; // ivar: _keepLocal
@property (nonatomic) NSUInteger keepLocalConstraints; // ivar: _keepLocalConstraints
@property (retain, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem


-(void)execute;


@end


#endif