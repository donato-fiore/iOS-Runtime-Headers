// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESULTREFINEMENTMULTISELECT_H
#define GEORESULTREFINEMENTMULTISELECT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GEOResultRefinementMultiSelect : NSObject

@property (nonatomic) NSInteger clauseType; // ivar: _clauseType
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *displayNameForMultiSelected; // ivar: _displayNameForMultiSelected
@property (nonatomic) unsigned int maximumNumberOfSelectElements; // ivar: _maximumNumberOfSelectElements
@property (copy, nonatomic) NSArray *multiSelect; // ivar: _multiSelect
@property (readonly, nonatomic) NSString *multiSelectIdentifier; // ivar: _multiSelectIdentifier
@property (readonly, nonatomic) BOOL showEqualWidthButtonsOnFilterView; // ivar: _showEqualWidthButtonsOnFilterView


-(id)convertToGEOPDResultRefinementMultiSelect;
-(id)initWithDisplayName:(id)arg0 multiSelect:(id)arg1 maximumNumberOfSelectElements:(unsigned int)arg2 clauseType:(NSInteger)arg3 showEqualWidthButtonsOnFilterView:(BOOL)arg4 displayNameForMultiSelected:(id)arg5 multiSelectIdentifier:(id)arg6 ;
-(id)initWithResultRefinementMultiSelect:(id)arg0 ;


@end


#endif