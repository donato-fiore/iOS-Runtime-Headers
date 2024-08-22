// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIWARNINGSDETECTORS_H
#define SGMIWARNINGSDETECTORS_H


#import <Foundation/Foundation.h>

#import "SGMIWarningsDetectionRegexes.h"

@interface SGMIWarningsDetectors : NSObject

@property (readonly) SGMIWarningsDetectionRegexes *attachment; // ivar: _attachment
@property (readonly) SGMIWarningsDetectionRegexes *followUp; // ivar: _followUp
@property (readonly) SGMIWarningsDetectionRegexes *recipient; // ivar: _recipient


-(id)description;
-(id)initWithAttachmentDictionary:(id)arg0 recipientDictionary:(id)arg1 followUpDictionary:(id)arg2 ;


@end


#endif