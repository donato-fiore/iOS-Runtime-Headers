// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMLOCATIONMICROLOCATIONVISIT_H
#define BMLOCATIONMICROLOCATIONVISIT_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMLocationMicroLocationVisit : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasIsStable; // ivar: _hasIsStable
@property (nonatomic) BOOL hasMaxProbability; // ivar: _hasMaxProbability
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStable; // ivar: _isStable
@property (readonly, nonatomic) CGFloat maxProbability; // ivar: _maxProbability
@property (readonly, nonatomic) NSString *maxProbabilityMicroLocationIdentifier; // ivar: _maxProbabilityMicroLocationIdentifier
@property (readonly, nonatomic) NSArray *numDevicesVector; // ivar: _numDevicesVector
@property (readonly, nonatomic) NSArray *probabilityVector; // ivar: _probabilityVector
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDomain:(id)arg0 maxProbabilityMicroLocationIdentifier:(id)arg1 maxProbability:(id)arg2 probabilityVector:(id)arg3 isStable:(id)arg4 numDevicesVector:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif