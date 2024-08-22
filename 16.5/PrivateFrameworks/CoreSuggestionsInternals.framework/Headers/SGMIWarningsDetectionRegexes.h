// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIWARNINGSDETECTIONREGEXES_H
#define SGMIWARNINGSDETECTIONREGEXES_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "SGMIWarningsDetectionRegex.h"

@interface SGMIWarningsDetectionRegexes : NSObject

@property (readonly, nonatomic) SGMIWarningsDetectionRegex *body; // ivar: _body
@property (readonly, nonatomic) NSDictionary *dataDetectorAdditions; // ivar: _dataDetectorAdditions
@property (readonly, nonatomic) NSDictionary *dataDetectorMappedAdditions; // ivar: _dataDetectorMappedAdditions
@property (readonly, nonatomic) SGMIWarningsDetectionRegex *subject; // ivar: _subject


+(id)_loadDataDetectorAdditionDict:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif