// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBAGFAILINGDATASOURCE_H
#define AMSBAGFAILINGDATASOURCE_H

@class NSString, NSError, NSDate;
@protocol AMSBagDataSourceProtocol;

#import <Foundation/Foundation.h>

#import "AMSBagKeySet.h"
#import "AMSProcessInfo.h"

@interface AMSBagFailingDataSource : NSObject <AMSBagDataSourceProtocol>



@property (retain, nonatomic) AMSBagKeySet *bagKeySet; // ivar: _bagKeySet
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
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (copy, nonatomic) NSString *profile; // ivar: _profile
@property (copy, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly) Class superclass;


-(id)bagKeyInfoForKey:(id)arg0 ;
-(id)initWithProfile:(id)arg0 profileVersion:(id)arg1 error:(id)arg2 delay:(CGFloat)arg3 bagKeySet:(id)arg4 ;
-(id)valueForURLVariable:(id)arg0 account:(id)arg1 ;
-(void)loadWithCompletion:(id)arg0 ;


@end


#endif