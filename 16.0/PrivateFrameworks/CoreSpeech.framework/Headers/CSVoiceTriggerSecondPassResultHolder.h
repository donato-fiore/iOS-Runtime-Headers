// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERSECONDPASSRESULTHOLDER_H
#define CSVOICETRIGGERSECONDPASSRESULTHOLDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerSecondPassResultHolder : NSObject

@property (readonly, nonatomic) BOOL isSecondChanceCandidate; // ivar: _isSecondChanceCandidate
@property (readonly, nonatomic) NSUInteger result; // ivar: _result
@property (readonly, nonatomic) NSDictionary *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


-(id)description;
-(id)initWithResult:(NSUInteger)arg0 voiceTriggerEventInfo:(id)arg1 isSecondChanceCandidate:(BOOL)arg2 ;


@end


#endif