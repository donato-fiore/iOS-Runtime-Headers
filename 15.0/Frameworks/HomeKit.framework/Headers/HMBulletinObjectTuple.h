// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBULLETINOBJECTTUPLE_H
#define HMBULLETINOBJECTTUPLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMBulletinObjectTuple : NSObject

@property (readonly, nonatomic) NSString *queryName; // ivar: _queryName
@property (readonly, nonatomic) NSString *uuidString; // ivar: _uuidString


+(id)tupleWithQueryType:(NSInteger)arg0 uuidString:(id)arg1 ;
-(id)initWithQueryType:(NSInteger)arg0 uuidString:(id)arg1 ;


@end


#endif