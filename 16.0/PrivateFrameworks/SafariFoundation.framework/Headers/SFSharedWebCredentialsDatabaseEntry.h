// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSHAREDWEBCREDENTIALSDATABASEENTRY_H
#define SFSHAREDWEBCREDENTIALSDATABASEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFSharedWebCredentialsDatabaseEntry : NSObject

@property (readonly, copy, nonatomic) NSString *appID; // ivar: _appID
@property (readonly, nonatomic, getter=isApproved) BOOL approved; // ivar: _approved
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSInteger service; // ivar: _service


-(id)_initWithDomain:(id)arg0 appID:(id)arg1 service:(NSInteger)arg2 isApproved:(BOOL)arg3 ;
-(id)description;
-(id)initWithServiceDetails:(id)arg0 ;


@end


#endif