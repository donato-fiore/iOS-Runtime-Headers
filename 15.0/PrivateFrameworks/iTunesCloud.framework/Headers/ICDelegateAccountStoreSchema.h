// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATEACCOUNTSTORESCHEMA_H
#define ICDELEGATEACCOUNTSTORESCHEMA_H


#import <Foundation/Foundation.h>


@interface ICDelegateAccountStoreSchema : NSObject



+(BOOL)_createDefaultSchemaWithConnection:(id)arg0 error:(*id)arg1 ;
+(BOOL)setupWithConnection:(id)arg0 error:(*id)arg1 ;
+(CGFloat)valueForDate:(id)arg0 ;
+(NSInteger)currentVersion;
+(id)dateForValue:(CGFloat)arg0 ;
+(id)defaultDatabasePath;


@end


#endif