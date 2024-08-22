// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHARACTERISTICGROUP_H
#define HFCHARACTERISTICGROUP_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface HFCharacteristicGroup : NSObject

@property (readonly, copy, nonatomic) NSSet *characteristicTypes; // ivar: _characteristicTypes
@property (readonly, nonatomic) NSInteger groupSortPriority;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)_currentTargetStateCharacteristicTypeMap;
+(id)_targetCurrentStateCharacteristicGroups;
+(id)_targetCurrentStateCharacteristicTypeMap;
+(id)allCharacteristicGroups;
+(id)characteristicGroupForCharacteristicType:(id)arg0 ;
+(id)characteristicGroupForIdentifier:(id)arg0 ;
+(id)groupedTitleForCharacteristicType:(id)arg0 ;
-(id)init;
-(id)initWithID:(id)arg0 title:(id)arg1 characteristicTypes:(id)arg2 ;


@end


#endif