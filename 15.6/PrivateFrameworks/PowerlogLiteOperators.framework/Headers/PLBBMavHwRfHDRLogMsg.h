// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBMAVHWRFHDRLOGMSG_H
#define PLBBMAVHWRFHDRLOGMSG_H

@class NSMutableDictionary, NSString, NSNumber;


#import "PLBasebandMessage.h"

@interface PLBBMavHwRfHDRLogMsg : PLBasebandMessage

@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSString *error; // ivar: _error
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *lDTXOffFrame; // ivar: _lDTXOffFrame
@property (retain) NSNumber *lDTXOnFrame; // ivar: _lDTXOnFrame
@property (retain) NSNumber *logDuration; // ivar: _logDuration
@property (retain) NSNumber *sDTXOffFrame; // ivar: _sDTXOffFrame
@property (retain) NSNumber *sDTXOnFrame; // ivar: _sDTXOnFrame
@property (retain) NSNumber *tDTXOffFrame; // ivar: _tDTXOffFrame
@property (retain) NSNumber *tDTXOnFrame; // ivar: _tDTXOnFrame


+(id)entryEventBackwardDefinitionBBMavHwRfHDR;
-(id)init;
-(id)logEventBackwardBBMavHwRfHDR;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)populateEntry:(id)arg0 ;
-(void)refreshRequest;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif