// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSETTINGSTASKOOFGETRESPONSE_H
#define ASSETTINGSTASKOOFGETRESPONSE_H

@class NSString, NSMutableArray, NSArray, NSNumber;


#import "ASItem.h"

@interface ASSettingsTaskOofGetResponse : ASItem

@property (retain, nonatomic) NSString *endTime; // ivar: _endTime
@property (retain, nonatomic) NSMutableArray *mOofMessages; // ivar: _mOofMessages
@property (retain, nonatomic) NSArray *oofMessages; // ivar: _oofMessages
@property (retain, nonatomic) NSNumber *oofState; // ivar: _oofState
@property (retain, nonatomic) NSString *startTime; // ivar: _startTime


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)convertToDAOofParams;
-(id)description;
-(void)addOofMessages:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif