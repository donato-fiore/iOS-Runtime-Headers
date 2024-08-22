// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REUIRELEVANCEENGINECONTROLLERUPDATEOPERATION_H
#define REUIRELEVANCEENGINECONTROLLERUPDATEOPERATION_H

@class REElementUpdateOperation;



@interface REUIRelevanceEngineControllerUpdateOperation : REElementUpdateOperation

@property (readonly, nonatomic) NSUInteger updateType; // ivar: _updateType


+(id)hideElement:(id)arg0 atPath:(id)arg1 ;
+(id)showElement:(id)arg0 atPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif