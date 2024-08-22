// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREPBASKWHENRUNREQUEST_H
#define WFREPBASKWHENRUNREQUEST_H

@class PBRequest, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface WFREPBAskWhenRunRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) NSData *actionSerializedParameters; // ivar: _actionSerializedParameters
@property (retain, nonatomic) NSString *associatedRunRequestIdentifier; // ivar: _associatedRunRequestIdentifier
@property (readonly, nonatomic) BOOL hasActionSerializedParameters;
@property (retain, nonatomic) NSMutableArray *parameterKeys; // ivar: _parameterKeys
@property (retain, nonatomic) NSMutableArray *parameterKeysAndStates; // ivar: _parameterKeysAndStates
@property (retain, nonatomic) NSMutableArray *possibleStates; // ivar: _possibleStates


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parameterKeysAndStatesAtIndex:(NSUInteger)arg0 ;
-(id)parameterKeysAtIndex:(NSUInteger)arg0 ;
-(id)possibleStatesAtIndex:(NSUInteger)arg0 ;
-(void)addParameterKeys:(id)arg0 ;
-(void)addParameterKeysAndStates:(id)arg0 ;
-(void)addPossibleStates:(id)arg0 ;
-(void)clearParameterKeys;
-(void)clearParameterKeysAndStates;
-(void)clearPossibleStates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif