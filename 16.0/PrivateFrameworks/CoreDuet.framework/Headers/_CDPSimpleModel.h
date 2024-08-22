// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDPSIMPLEMODEL_H
#define _CDPSIMPLEMODEL_H

@class NSArray, NSIndexSet, NSString;
@protocol _CDPModel, _CDPDataHarvester;

#import <Foundation/Foundation.h>


@interface _CDPSimpleModel : NSObject <_CDPModel>

 {
    BOOL _loaded;
    BOOL _scoresAreDirty;
    NSUInteger _NEmail;
    NSUInteger _size;
    NSUInteger _NPeople;
    *CGFloat _timestamp;
    *BOOL _userIsSender;
    *BOOL _userIsThreadInitiator;
    **unsigned int _email;
    *NSUInteger _emailLength;
    *float _email2LogScore;
    **unsigned int _people2Email;
    *NSUInteger _people2EmailLength;
    NSArray *_people;
    NSIndexSet *_testingIndices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<_CDPDataHarvester> *harvester; // ivar: _harvester
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float lambda; // ivar: _lambda
@property (readonly, nonatomic) NSUInteger nEmail;
@property (readonly, nonatomic) NSUInteger nPeople;
@property (readonly, nonatomic) NSArray *people;
@property (nonatomic) BOOL requireOutgoingInteraction; // ivar: _requireOutgoingInteraction
@property (readonly) Class superclass;
@property (readonly, nonatomic) float w0; // ivar: _w0


+(int)maxNumberOfEmailsSupported;
-(*unsigned int)_newIdsForPeople:(id)arg0 length:(*NSUInteger)arg1 ;
-(id)_testingIndices;
-(id)peopleWithID:(unsigned int)arg0 ;
-(struct _cdp_prediction_result *)_newPredictionResultWithSeed:(*unsigned int)arg0 seedLength:(NSUInteger)arg1 realSeedLength:(NSUInteger)arg2 maxTrainingEmailID:(unsigned int)arg3 ;
-(void)_printEmailWithID:(NSUInteger)arg0 ;
-(void)_printPrediction:(struct _cdp_prediction_result *)arg0 ;
-(void)_printUserWithID:(NSUInteger)arg0 ;
-(void)_printUsers:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(void)_reallocModel;
-(void)dealloc;
-(void)getEmail:(**unsigned int)arg0 emailLength:(*NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)loadModel:(id)arg0 ;
-(void)makePredictionForGroup:(id)arg0 clientType:(NSInteger)arg1 limit:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif