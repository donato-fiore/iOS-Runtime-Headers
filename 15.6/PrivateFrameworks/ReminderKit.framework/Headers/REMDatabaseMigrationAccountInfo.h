// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMDATABASEMIGRATIONACCOUNTINFO_H
#define REMDATABASEMIGRATIONACCOUNTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface REMDatabaseMigrationAccountInfo : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithAccountType:(NSInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;


@end


#endif