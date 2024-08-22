// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFFOLLOWUPWARNINGRESULT_H
#define MFFOLLOWUPWARNINGRESULT_H

@class NSError, SGMailIntelligenceFollowUpWarning;

#import <Foundation/Foundation.h>


@interface MFFollowUpWarningResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) SGMailIntelligenceFollowUpWarning *followUpWarning; // ivar: _followUpWarning


-(id)initWithFollowUpWarning:(id)arg0 error:(id)arg1 ;


@end


#endif