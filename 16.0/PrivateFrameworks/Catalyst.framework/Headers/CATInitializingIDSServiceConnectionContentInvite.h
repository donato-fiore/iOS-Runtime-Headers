// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATINITIALIZINGIDSSERVICECONNECTIONCONTENTINVITE_H
#define CATINITIALIZINGIDSSERVICECONNECTIONCONTENTINVITE_H

@class NSDictionary;
@protocol CATInitializingIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATInitializingIDSServiceConnectionContentInvite : NSObject <CATInitializingIDSServiceConnectionMessageContent>



@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)instanceWithDictionary:(id)arg0 ;
-(id)init;
-(id)initWithUserInfo:(id)arg0 ;


@end


#endif