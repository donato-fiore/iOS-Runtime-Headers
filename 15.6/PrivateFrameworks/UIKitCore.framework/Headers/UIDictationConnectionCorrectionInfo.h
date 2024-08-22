// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONCONNECTIONCORRECTIONINFO_H
#define UIDICTATIONCONNECTIONCORRECTIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIDictationConnectionCorrectionInfo : NSObject

@property (nonatomic) int alternativeSelectionCount; // ivar: _alternativeSelectionCount
@property (nonatomic) int characterDeletionCount; // ivar: _characterDeletionCount
@property (nonatomic) int characterInsertionCount; // ivar: _characterInsertionCount
@property (nonatomic) int characterModificationCount; // ivar: _characterModificationCount
@property (nonatomic) int characterSubstitutionCount; // ivar: _characterSubstitutionCount
@property (copy, nonatomic) NSString *correctedText; // ivar: _correctedText




@end


#endif