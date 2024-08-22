// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAPSMACHSERVICECONNECTIONKEY_H
#define CKAPSMACHSERVICECONNECTIONKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *environmentName; // ivar: _environmentName
@property (readonly, copy, nonatomic) NSString *namedDelegatePort; // ivar: _namedDelegatePort


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEnvironmentName:(id)arg0 namedDelegatePort:(id)arg1 ;


@end


#endif