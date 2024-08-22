// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSBAGFROZENDATASOURCE_H
#define AMSBAGFROZENDATASOURCE_H

@class ACAccount, NSDictionary, NSString, NSDate;
@protocol AMSBagDataSourceProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (copy, nonatomic) id *dataSourceChangedHandler;
@property (copy, nonatomic) id *dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *defaultValues; // ivar: _defaultValues
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
-(id)_initWithProfile:(id)arg0 profileVersion:(id)arg1 data:(id)arg2 expirationDate:(id)arg3 account:(id)arg4 processInfo:(id)arg5 defaultValues:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultValueForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForURLVariable:(id)arg0 account:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadWithCompletion:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif