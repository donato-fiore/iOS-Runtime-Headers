// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDMIGRATIONREQUESTOPTIONS_H
#define ASDMIGRATIONREQUESTOPTIONS_H



#import "ASDRequestOptions.h"

@interface ASDMigrationRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSUInteger migrationType; // ivar: _migrationType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMigrationType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif