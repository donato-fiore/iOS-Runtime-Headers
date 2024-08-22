// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEMITSTUDYLOGSWITCHEREVENTRESPONSE_H
#define SBEMITSTUDYLOGSWITCHEREVENTRESPONSE_H

@class NSString, NSDictionary;


#import "SBSwitcherModifierEventResponse.h"

@interface SBEmitStudyLogSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload


-(NSInteger)type;
-(id)initWithStudyLogWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif