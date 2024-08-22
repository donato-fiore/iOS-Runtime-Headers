// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDONTOLOGYTRANSACTION_H
#define HDONTOLOGYTRANSACTION_H


#import <Foundation/Foundation.h>

#import "HDDatabaseTransaction.h"
#import "HDSimpleGraphDatabase.h"
#import "HDProfile.h"

@interface HDOntologyTransaction : NSObject

@property (readonly, nonatomic) HDDatabaseTransaction *databaseTransaction; // ivar: _databaseTransaction
@property (readonly, nonatomic) HDSimpleGraphDatabase *graphDatabase; // ivar: _graphDatabase
@property (readonly, weak, nonatomic) HDProfile *profile;


-(id)init;
-(id)initWithDatabaseTransaction:(id)arg0 graphDatabase:(id)arg1 ;


@end


#endif