// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSQUOTAEVALUATIONSTATE_H
#define NMSQUOTAEVALUATIONSTATE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface NMSQuotaEvaluationState : NSObject

@property (nonatomic) NSInteger containerIndex; // ivar: _containerIndex
@property (retain, nonatomic) NSString *externalLibraryIdentifier; // ivar: _externalLibraryIdentifier
@property (nonatomic) NSInteger itemIndex; // ivar: _itemIndex
@property (nonatomic) NSUInteger itemSize; // ivar: _itemSize
@property (nonatomic) NSUInteger listQuota; // ivar: _listQuota
@property (nonatomic) NSUInteger listTotalSize; // ivar: _listTotalSize
@property (retain, nonatomic) NSNumber *mediaLibraryIdentifier; // ivar: _mediaLibraryIdentifier




@end


#endif