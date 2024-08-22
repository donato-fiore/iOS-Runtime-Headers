// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTHASHACTION_H
#define MTHASHACTION_H



#import "MTTreatmentAction.h"
#import "MTIDScheme.h"

@interface MTHashAction : MTTreatmentAction

@property (retain, nonatomic) MTIDScheme *scheme; // ivar: _scheme


-(id)hashOf:(id)arg0 userId:(id)arg1 ;
-(id)initWithField:(id)arg0 configDictionary:(id)arg1 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;


@end


#endif