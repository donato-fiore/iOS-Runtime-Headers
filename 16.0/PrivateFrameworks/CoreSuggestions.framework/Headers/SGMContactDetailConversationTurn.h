// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMCONTACTDETAILCONVERSATIONTURN_H
#define SGMCONTACTDETAILCONVERSATIONTURN_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactDetailConversationTurn : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 detailExtraction:(struct SGMDetailExtractionType_ )arg1 selfIdName:(struct SGMTypeSafeBool_ )arg2 extractionModelVersion:(NSUInteger)arg3 receivedConverstationTurn:(struct SGMTypeSafeBool_ )arg4 knownSuggestedContactDetail:(struct SGMTypeSafeBool_ )arg5 curatedContactDetail:(struct SGMTypeSafeBool_ )arg6 throughApp:(struct SGMContactDetailUsedApp_ )arg7 contactDetailUsed:(struct SGMContactDetailType_ )arg8 ;


@end


#endif