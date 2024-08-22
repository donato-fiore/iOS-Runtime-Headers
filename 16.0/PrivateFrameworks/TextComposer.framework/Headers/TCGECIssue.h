// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCGECISSUE_H
#define TCGECISSUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCGECIssue : NSObject

@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) NSString *correction; // ivar: _correction
@property (readonly, nonatomic) NSUInteger issueType; // ivar: _issueType


-(id)initWithCorrection:(id)arg0 andConfidence:(float)arg1 forIssueType:(NSUInteger)arg2 ;


@end


#endif