// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBAGFROZENDATASOURCE_H
#define AMSBAGFROZENDATASOURCE_H

@class NSArray, NSDictionary, NSString, NSDate;
@protocol AMSBagDataSourceProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSBagKeySet.h"
#import "AMSProcessInfo.h"

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) AMSBagKeySet *bagKeySet; // ivar: _bagKeySet
@property (readonly, nonatomic) NSArray *cookies; // ivar: _cookies
@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (copy, nonatomic) id *dataSourceChangedHandler;
@property (copy, nonatomic) id *dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo
@property (readonly, copy, nonatomic) NSString *profile; // ivar: _profile
@property (readonly, copy, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_initWithProfile:(id)arg0 profileVersion:(id)arg1 data:(id)arg2 expirationDate:(id)arg3 bagKeySet:(id)arg4 cookies:(id)arg5 processInfo:(id)arg6 ;
-(id)bagKeyInfoForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForURLVariable:(id)arg0 account:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadWithCompletion:(id)arg0 ;


@end


#endif