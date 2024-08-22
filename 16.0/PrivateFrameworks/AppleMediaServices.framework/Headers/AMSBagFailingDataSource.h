// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBAGFAILINGDATASOURCE_H
#define AMSBAGFAILINGDATASOURCE_H

@class NSString, NSError, NSDate;
@protocol AMSBagDataSourceProtocol;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSBagFailingDataSource : NSObject <AMSBagDataSourceProtocol>



@property (copy, nonatomic) id *dataSourceChangedHandler;
@property (copy, nonatomic) id *dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo; // ivar: processInfo
@property (copy, nonatomic) NSString *profile; // ivar: _profile
@property (copy, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly) Class superclass;


-(id)defaultValueForKey:(id)arg0 ;
-(id)initWithProfile:(id)arg0 profileVersion:(id)arg1 error:(id)arg2 delay:(CGFloat)arg3 ;
-(id)valueForURLVariable:(id)arg0 account:(id)arg1 ;
-(void)loadWithCompletion:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif