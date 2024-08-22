// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMAUXILIARYCHANGEINFOFETCHRESULT_H
#define REMAUXILIARYCHANGEINFOFETCHRESULT_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface REMAuxiliaryChangeInfoFetchResult : NSObject

@property (retain, nonatomic) NSArray *auxiliaryChangeInfos; // ivar: _auxiliaryChangeInfos
@property (retain, nonatomic) NSMutableDictionary *changeObjectForAuxiliaryChangeInfoMap; // ivar: _changeObjectForAuxiliaryChangeInfoMap
@property (nonatomic) Class typedKlass; // ivar: _typedKlass


+(id)auxiliaryChangeInfoFetchResultOfType:(Class)arg0 ;
-(id)auxiliaryChangeInfoFromData:(id)arg0 withObjectID:(id)arg1 fromChangeObject:(id)arg2 error:(*id)arg3 ;
-(id)changeObjectForAuxiliaryChangeInfo:(id)arg0 ;
-(id)initWithAuxiliaryChangeInfoType:(Class)arg0 ;


@end


#endif