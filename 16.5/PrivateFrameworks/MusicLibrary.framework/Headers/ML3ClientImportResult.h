// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CLIENTIMPORTRESULT_H
#define ML3CLIENTIMPORTRESULT_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ML3ClientImportResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *resultingDatabasePersistentIDs; // ivar: _resultingDatabasePersistentIDs
@property (readonly, nonatomic) BOOL success; // ivar: _success


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 resultingDatabasePersistentIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif