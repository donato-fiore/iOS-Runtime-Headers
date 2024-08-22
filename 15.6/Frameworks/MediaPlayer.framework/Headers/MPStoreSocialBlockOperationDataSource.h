// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTORESOCIALBLOCKOPERATIONDATASOURCE_H
#define MPSTORESOCIALBLOCKOPERATIONDATASOURCE_H

@class NSString;
@protocol MPStoreSocialRequestOperationDataSource;

#import <Foundation/Foundation.h>

#import "MPModelSocialPerson.h"

@interface MPStoreSocialBlockOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPModelSocialPerson *person; // ivar: _person
@property (readonly) Class superclass;


-(NSInteger)httpBodyType;
-(NSInteger)httpMethod;
-(id)bagKey;
-(id)httpBody;
-(id)queryItems;


@end


#endif