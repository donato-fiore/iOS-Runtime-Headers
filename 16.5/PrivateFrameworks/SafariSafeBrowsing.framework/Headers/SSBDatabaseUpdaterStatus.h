// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSBDATABASEUPDATERSTATUS_H
#define SSBDATABASEUPDATERSTATUS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSBDatabaseUpdaterStatus : NSObject {
    DatabaseUpdaterStatus _databaseUpdaterStatus;
}


@property (readonly, nonatomic) NSUInteger databaseUpdaterState;
@property (readonly, nonatomic) NSString *provider;


-(id)_initWithDatabaseUpdaterStatus:(struct DatabaseUpdaterStatus )arg0 ;


@end


#endif