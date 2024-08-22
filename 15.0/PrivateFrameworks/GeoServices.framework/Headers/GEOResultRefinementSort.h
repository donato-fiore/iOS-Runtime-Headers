// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESULTREFINEMENTSORT_H
#define GEORESULTREFINEMENTSORT_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GEOResultRefinementSort : NSObject

@property (retain, nonatomic) NSNumber *defaultSelectedElementIndex; // ivar: _defaultSelectedElementIndex
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *selectedElementIndex; // ivar: _selectedElementIndex
@property (copy, nonatomic) NSArray *sorts; // ivar: _sorts


-(id)convertToGEOPDResultRefinementSort;
-(id)initWithDisplayName:(id)arg0 sorts:(id)arg1 selectedElementIndex:(id)arg2 defaultSelectedElementIndex:(id)arg3 ;
-(id)initWithResultRefinementSort:(id)arg0 ;


@end


#endif