// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSNAPSHOTBAG_H
#define AMSSNAPSHOTBAG_H

@class NSDate, NSString;
@protocol NSSecureCoding, AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSBagFrozenDataSource.h"
#import "AMSProcessInfo.h"

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) AMSBagFrozenDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic) optional<AMSCore::Bag> underlyingBag; // ivar: _underlyingBag


+(BOOL)supportsSecureCoding;
-(BOOL)isLoaded;
-(id)URLForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 account:(id)arg1 ;
-(id)_initWithDataSource:(id)arg0 ;
-(id)_initWithSnapshotBag:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)compile;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)init;
-(id)initWithBag:(struct Bag )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif