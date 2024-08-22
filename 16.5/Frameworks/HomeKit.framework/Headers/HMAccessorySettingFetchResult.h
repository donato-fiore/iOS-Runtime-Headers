// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTINGFETCHRESULT_H
#define HMACCESSORYSETTINGFETCHRESULT_H

@class NSArray, NSString, NSError;
@protocol HMFObject;

#import <Foundation/Foundation.h>

#import "HMImmutableSetting.h"

@interface HMAccessorySettingFetchResult : NSObject <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) NSInteger failureType; // ivar: _failureType
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMImmutableSetting *setting; // ivar: _setting
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)fetchResultsWithKeyPaths:(id)arg0 failureType:(NSInteger)arg1 ;
-(id)initWithKeyPath:(id)arg0 failureType:(NSInteger)arg1 ;
-(id)initWithKeyPath:(id)arg0 setting:(id)arg1 failureType:(NSInteger)arg2 ;
-(id)initWithSetting:(id)arg0 ;


@end


#endif