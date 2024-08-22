// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SSBDATABASESTATUS_H
#define _SSBDATABASESTATUS_H


#import <Foundation/Foundation.h>


@interface _SSBDatabaseStatus : NSObject {
    DatabaseStatus _databaseStatus;
}


@property (readonly, nonatomic) NSUInteger databaseCount;


-(NSUInteger)sizeOfDatabaseAtIndex:(NSUInteger)arg0 ;
-(id)initWithDatabaseStatus:(struct DatabaseStatus )arg0 ;
-(id)lastUpdateTimeOfDatabaseAtIndex:(NSUInteger)arg0 ;
-(id)nameOfDatabaseAtIndex:(NSUInteger)arg0 ;
-(id)nextPollingTimeOfDatabaseAtIndex:(NSUInteger)arg0 ;
-(unsigned int)hashCountOfDatabaseAtIndex:(NSUInteger)arg0 ;


@end


#endif