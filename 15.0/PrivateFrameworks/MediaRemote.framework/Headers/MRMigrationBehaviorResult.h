// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRMIGRATIONBEHAVIORRESULT_H
#define MRMIGRATIONBEHAVIORRESULT_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface MRMigrationBehaviorResult : NSObject

@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSString *destinationUID; // ivar: _destinationUID
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *sourceUID; // ivar: _sourceUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;


@end


#endif