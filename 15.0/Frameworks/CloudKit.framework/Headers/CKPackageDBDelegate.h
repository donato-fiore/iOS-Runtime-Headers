// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPACKAGEDBDELEGATE_H
#define CKPACKAGEDBDELEGATE_H

@protocol CKSQLiteDelegate;

#import <Foundation/Foundation.h>


@interface CKPackageDBDelegate : NSObject <CKSQLiteDelegate>



@property (readonly, nonatomic) int userVersion;


-(BOOL)migrateDatabase:(id)arg0 fromVersion:(int)arg1 ;


@end


#endif