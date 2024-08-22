// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CELLULARSTATERELAY_H
#define CELLULARSTATERELAY_H

@class NSString, NSNumber;


#import "NetworkAnalyticsStateRelay.h"

@interface CellularStateRelay : NetworkAnalyticsStateRelay

@property int cellBandInfo; // ivar: _cellBandInfo
@property int cellBandwidth; // ivar: _cellBandwidth
@property (readonly) unsigned char cellDualSimStatus; // ivar: _cellDualSimStatus
@property int cellMCC; // ivar: _cellMCC
@property int cellMNC; // ivar: _cellMNC
@property (readonly) int cellNonPreferredMCC; // ivar: _cellNonPreferredMCC
@property (readonly) int cellNonPreferredMNC; // ivar: _cellNonPreferredMNC
@property int cellPID; // ivar: _cellPID
@property int cellRSRP; // ivar: _cellRSRP
@property (nonatomic) BOOL cellRrcConnected; // ivar: _cellRrcConnected
@property NSUInteger cellSPIType; // ivar: _cellSPIType
@property int cellTAC; // ivar: _cellTAC
@property (retain) NSString *cellType; // ivar: _cellType
@property int cellUARFCN; // ivar: _cellUARFCN
@property char nrFrequencyBand; // ivar: _nrFrequencyBand
@property char nrServingCellType; // ivar: _nrServingCellType
@property (retain) NSString *ratSelectionCurrent; // ivar: _ratSelectionCurrent
@property (nonatomic) BOOL ratSelectionIsNR; // ivar: _ratSelectionIsNR
@property (retain) NSNumber *ratSelectionMask; // ivar: _ratSelectionMask
@property (retain) NSString *ratSelectionPreferred; // ivar: _ratSelectionPreferred


-(id)extendedDescription;
-(id)initForInternalType:(unsigned char)arg0 ;
-(void)updateCellInfo:(id)arg0 ;


@end


#endif