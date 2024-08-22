// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKBIOMETRICPASSPREFLIGHTMANAGER_H
#define NPKBIOMETRICPASSPREFLIGHTMANAGER_H

@protocol NPKBiometricPassPreflightManagerDataSource;

#import <Foundation/Foundation.h>


@interface NPKBiometricPassPreflightManager : NSObject

@property (readonly, weak, nonatomic) NSObject<NPKBiometricPassPreflightManagerDataSource> *dataSource; // ivar: _dataSource


-(id)initWithDataSource:(id)arg0 ;
-(void)preflightStatusForType:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif