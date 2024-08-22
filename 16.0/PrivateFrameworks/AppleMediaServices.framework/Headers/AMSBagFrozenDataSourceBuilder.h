// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBAGFROZENDATASOURCEBUILDER_H
#define AMSBAGFROZENDATASOURCEBUILDER_H

@class ACAccount, NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSBagFrozenDataSourceBuilder : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) NSDictionary *defaultValues; // ivar: _defaultValues
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (retain, nonatomic) NSString *profileVersion; // ivar: _profileVersion


-(id)createFrozenBag;
-(id)createFrozenDataSource;
-(id)initWithFrozenDataSource:(id)arg0 ;


@end


#endif