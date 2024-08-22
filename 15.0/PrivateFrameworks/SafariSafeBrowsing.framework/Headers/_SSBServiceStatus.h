// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SSBSERVICESTATUS_H
#define _SSBSERVICESTATUS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _SSBServiceStatus : NSObject {
    ServiceStatus _serviceStatus;
}


@property (readonly, copy, nonatomic) NSArray *activeTransactions;
@property (readonly, nonatomic) NSUInteger connectionCount;
@property (readonly, nonatomic) NSUInteger databaseUpdaterState;
@property (readonly, nonatomic) NSArray *databaseUpdatersStatuses;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) int processIdentifier;


-(id)bundleIdentifierForConnectionAtIndex:(NSUInteger)arg0 ;
-(id)initWithServiceStatus:(struct ServiceStatus )arg0 ;
-(int)processIdentifierForConnectionAtIndex:(NSUInteger)arg0 ;


@end


#endif