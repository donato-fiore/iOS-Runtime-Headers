// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGEASSETWRITER_H
#define PHIMAGEASSETWRITER_H

@class NSData;


#import "PHAssetWriter.h"

@interface PHImageAssetWriter : PHAssetWriter

@property (retain, nonatomic) NSData *data; // ivar: _data


-(NSUInteger)estimatedOutputSizeWithError:(*id)arg0 ;
-(id)request;
-(id)transfer;


@end


#endif