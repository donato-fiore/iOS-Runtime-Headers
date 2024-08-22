// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESULTREFINEMENTTOGGLE_H
#define GEORESULTREFINEMENTTOGGLE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "GEOPDResultRefinementMetadata.h"

@interface GEOResultRefinementToggle : NSObject

@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) int evChargingConnectorType; // ivar: _evChargingConnectorType
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) GEOPDResultRefinementMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *refinementKey; // ivar: _refinementKey
@property (readonly, nonatomic) BOOL selectionFromView; // ivar: _selectionFromView
@property (readonly, nonatomic) NSNumber *selectionSequenceNumber; // ivar: _selectionSequenceNumber
@property (readonly, nonatomic) BOOL showAsSelected; // ivar: _showAsSelected
@property (readonly, nonatomic) NSUInteger toggleType; // ivar: _toggleType


-(id)convertToGEOPDResultRefinementToggle;
-(id)initWithDisplayName:(id)arg0 isSelected:(BOOL)arg1 metadata:(id)arg2 toggleType:(NSUInteger)arg3 evChargingConnectorType:(int)arg4 selectionSequenceNumber:(id)arg5 selectionFromView:(BOOL)arg6 refinementKey:(id)arg7 showAsSelected:(BOOL)arg8 ;
-(id)initWithResultRefinementToggle:(id)arg0 ;


@end


#endif