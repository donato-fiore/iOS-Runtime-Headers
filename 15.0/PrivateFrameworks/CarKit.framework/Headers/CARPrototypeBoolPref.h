// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPROTOTYPEBOOLPREF_H
#define CARPROTOTYPEBOOLPREF_H



#import "CARPrototypePref.h"

@interface CARPrototypeBoolPref : CARPrototypePref

@property (readonly, nonatomic) BOOL cachedValueBool;
@property (readonly, nonatomic) BOOL invertValueForState;
@property (readonly, nonatomic) BOOL valueBool;


+(id)prefWithDomain:(id)arg0 key:(id)arg1 title:(id)arg2 invertValueForState:(BOOL)arg3 valueChangedBlock:(id)arg4 ;
-(BOOL)cachedState;
-(BOOL)state;
-(id)description;
-(void)setCachedState:(BOOL)arg0 ;
-(void)setState:(BOOL)arg0 ;


@end


#endif