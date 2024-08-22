// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSEVENTPROVIDERRESULT_H
#define TPSEVENTPROVIDERRESULT_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface TPSEventProviderResult : NSObject

@property (retain, nonatomic) id *bookmark; // ivar: _bookmark
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *observationMap; // ivar: _observationMap
@property (retain, nonatomic) NSDate *resultDate; // ivar: _resultDate
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)debugDescription;


@end


#endif