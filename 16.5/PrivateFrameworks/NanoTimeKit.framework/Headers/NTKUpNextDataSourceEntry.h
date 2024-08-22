// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKUPNEXTDATASOURCEENTRY_H
#define NTKUPNEXTDATASOURCEENTRY_H

@class NSSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTKUpNextDataSourceEntry : NSObject <NSCopying>



@property (retain, nonatomic) NSSet *identifiers; // ivar: _identifiers
@property (nonatomic) BOOL isDonation; // ivar: _isDonation
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDataSourceIdentifiers:(id)arg0 localizedName:(id)arg1 isDonation:(BOOL)arg2 ;


@end


#endif