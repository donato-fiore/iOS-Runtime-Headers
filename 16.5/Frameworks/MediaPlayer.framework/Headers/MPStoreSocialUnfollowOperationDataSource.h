// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTORESOCIALUNFOLLOWOPERATIONDATASOURCE_H
#define MPSTORESOCIALUNFOLLOWOPERATIONDATASOURCE_H

@class NSString;
@protocol MPStoreSocialRequestOperationDataSource;

#import <Foundation/Foundation.h>

#import "MPModelSocialPerson.h"

@interface MPStoreSocialUnfollowOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>



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