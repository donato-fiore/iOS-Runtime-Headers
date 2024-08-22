// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAACCESSKEY_H
#define LAACCESSKEY_H

@class NSString;
@protocol LAKeyStoreKey;

#import <Foundation/Foundation.h>

#import "LAACL.h"

@interface LAAccessKey : NSObject {
    id<LAKeyStoreKey> *_key;
}


@property (readonly, nonatomic) LAACL *acl; // ivar: _acl
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithACL:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(void)armInContext:(id)arg0 completion:(id)arg1 ;
-(void)armInContext:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)unlockKey:(id)arg0 inContext:(id)arg1 userInfo:(id)arg2 completion:(id)arg3 ;


@end


#endif