// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORESULTREFINEMENTMULTISELECTELEMENT_H
#define GEORESULTREFINEMENTMULTISELECTELEMENT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "GEOPDResultRefinementMetadata.h"

@interface GEOResultRefinementMultiSelectElement : NSObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSUInteger elementType; // ivar: _elementType
@property (readonly, nonatomic) int evChargingConnectorType; // ivar: _evChargingConnectorType
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) GEOPDResultRefinementMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *refinementKey;
@property (readonly, nonatomic) NSNumber *selectionSequenceNumber; // ivar: _selectionSequenceNumber


-(id)convertToGEOPDResultRefinementMultiSelectElement;
-(id)initWithDisplayName:(id)arg0 isSelected:(BOOL)arg1 metadata:(id)arg2 elementType:(NSUInteger)arg3 evChargingConnectorType:(int)arg4 selectionSequenceNumber:(id)arg5 ;
-(id)initWithResultRefinementMultiSelectElement:(id)arg0 ;


@end


#endif