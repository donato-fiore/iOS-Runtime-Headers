// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKWKDATADETECTORINFO_H
#define VKWKDATADETECTORINFO_H

@class NSArray, DDScannerResult;

#import <Foundation/Foundation.h>


@interface VKWKDataDetectorInfo : NSObject

@property (copy, nonatomic) NSArray *boundingQuads; // ivar: _boundingQuads
@property (nonatomic) _NSRange characterRange; // ivar: _characterRange
@property (retain, nonatomic) DDScannerResult *result; // ivar: _result




@end


#endif