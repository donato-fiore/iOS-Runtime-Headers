// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSOUTPUTCLUE_H
#define CLSOUTPUTCLUE_H

@class NSMutableArray;


#import "CLSClue.h"
#import "CLSEvent.h"
#import "CLSPersonIdentity.h"
#import "CLSPlace.h"

@interface CLSOutputClue : CLSClue {
    NSMutableArray *_relatedInputTimeClues;
    NSMutableArray *_relatedInputLocationClues;
    NSMutableArray *_relatedInputPeopleClues;
}


@property (retain) CLSEvent *relatedEvent; // ivar: _relatedEvent
@property (retain) CLSPersonIdentity *relatedPerson; // ivar: _relatedPerson
@property (retain) CLSPlace *relatedPlace; // ivar: _relatedPlace


+(id)clueWithValue:(id)arg0 forKey:(id)arg1 ;
+(id)clueWithValue:(id)arg0 forKey:(id)arg1 confidence:(CGFloat)arg2 relevance:(CGFloat)arg3 ;
-(BOOL)isEqualToClue:(id)arg0 ;
-(id)description;
-(id)init;
-(id)relatedInputClues;
-(id)relatedInputLocationClues;
-(id)relatedInputPeopleClues;
-(id)relatedInputTimeClues;
-(void)addRelatedInputClues:(id)arg0 ;


@end


#endif