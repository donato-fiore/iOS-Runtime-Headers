// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSINSECUREDRAWINGACTION_H
#define BKSINSECUREDRAWINGACTION_H

@class BSAction, NSDictionary, NSArray;



@interface BKSInsecureDrawingAction : BSAction

@property (readonly, nonatomic) NSDictionary *pidToContextInfoDictionary;
@property (readonly, nonatomic) NSArray *processIds;
@property (readonly, nonatomic) NSArray *secureModeViolations;


-(id)_initWithPidToContextInfoDictionary:(id)arg0 ;
-(id)initWithInfo:(id)arg0 responder:(id)arg1 ;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithPidToContextIdsDictionary:(id)arg0 ;
-(id)initWithSecureModeViolations:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif