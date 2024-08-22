// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRTRIGGERPHRASEDETECTORNDAPIRESULT_H
#define SSRTRIGGERPHRASEDETECTORNDAPIRESULT_H


#import <Foundation/Foundation.h>


@interface SSRTriggerPhraseDetectorNDAPIResult : NSObject

@property (nonatomic) NSUInteger bestEnd; // ivar: _bestEnd
@property (nonatomic) NSUInteger bestPhrase; // ivar: _bestPhrase
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) NSUInteger bestStart; // ivar: _bestStart
@property (nonatomic) BOOL isEarlyWarning; // ivar: _isEarlyWarning
@property (nonatomic) BOOL isRescoring; // ivar: _isRescoring
@property (nonatomic) NSUInteger phId; // ivar: _phId
@property (nonatomic) NSUInteger samplesFed; // ivar: _samplesFed




@end


#endif