// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLBOOKLETMIGRATIONINFO_H
#define BLBOOKLETMIGRATIONINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLBookletMigrationInfo : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger migrationState; // ivar: _migrationState
@property (nonatomic) NSInteger storeID; // ivar: _storeID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreID:(NSInteger)arg0 migrationState:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif