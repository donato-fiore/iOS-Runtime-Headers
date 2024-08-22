// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSQLITECONNECTIONOPTIONS_H
#define ICSQLITECONNECTIONOPTIONS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger cacheSize; // ivar: _cacheSize
@property (copy, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatabasePath:(id)arg0 ;
-(int)applyToDatabase:(struct sqlite3 *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif