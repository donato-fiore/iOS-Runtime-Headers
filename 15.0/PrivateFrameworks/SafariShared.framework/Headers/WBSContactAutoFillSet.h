// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCONTACTAUTOFILLSET_H
#define WBSCONTACTAUTOFILLSET_H

@class NSDictionary, NSArray, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface WBSContactAutoFillSet : NSObject

@property (readonly, copy, nonatomic) NSDictionary *controlIDToValueMap; // ivar: _controlIDToValueMap
@property (readonly, copy, nonatomic) NSArray *fillDisplayProperties; // ivar: _fillDisplayProperties
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSSet *propertiesToFillOrSkip; // ivar: _propertiesToFillOrSkip
@property (readonly, copy, nonatomic) NSArray *skipDisplayProperties; // ivar: _skipDisplayProperties


+(id)displayStringsForFillMatches:(id)arg0 skipMatches:(id)arg1 matchesForForm:(id)arg2 label:(id)arg3 formDataController:(id)arg4 ;
+(id)displayStringsForSkipMatches:(id)arg0 matchesForForm:(id)arg1 formDataController:(id)arg2 ;
-(id)initWithControlIDToValueMap:(id)arg0 label:(id)arg1 fillDisplayProperties:(id)arg2 skipDisplayProperties:(id)arg3 propertiesToFillOrSkip:(id)arg4 ;


@end


#endif