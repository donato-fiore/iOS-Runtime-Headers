// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATADETECTORRESULTS_H
#define WFDATADETECTORRESULTS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>

#import "WFFileType.h"

@interface WFDataDetectorResults : NSObject

@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) NSArray *dateComponentsResults;
@property (readonly, nonatomic) NSArray *dates;
@property (readonly, nonatomic) NSArray *dictionaries; // ivar: _dictionaries
@property (readonly, nonatomic) WFFileType *dictionaryType; // ivar: _dictionaryType
@property (readonly, nonatomic) NSNumber *number; // ivar: _number
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *streetAddresses;
@property (readonly, nonatomic) NSArray *textCheckingResults; // ivar: _textCheckingResults


-(id)init;
-(id)initWithTextCheckingResults:(id)arg0 number:(id)arg1 dictionaries:(id)arg2 dictionaryType:(id)arg3 ;


@end


#endif