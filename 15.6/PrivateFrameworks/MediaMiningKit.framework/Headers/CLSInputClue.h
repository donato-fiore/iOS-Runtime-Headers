// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSINPUTCLUE_H
#define CLSINPUTCLUE_H



#import "CLSClue.h"

@interface CLSInputClue : CLSClue

@property BOOL needsPreparation; // ivar: _needsPreparation


-(id)init;
-(void)_prepareWithProgressBlock:(id)arg0 ;
-(void)prepareIfNeeded;


@end


#endif