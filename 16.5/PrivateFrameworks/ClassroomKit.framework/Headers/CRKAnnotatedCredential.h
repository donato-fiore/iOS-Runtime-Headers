// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKANNOTATEDCREDENTIAL_H
#define CRKANNOTATEDCREDENTIAL_H

@class NSDictionary;
@protocol CRKKeychainItem;

#import <Foundation/Foundation.h>


@interface CRKAnnotatedCredential : NSObject

@property (readonly, copy, nonatomic) NSDictionary *annotation; // ivar: _annotation
@property (readonly, nonatomic) NSObject<CRKKeychainItem> *credential; // ivar: _credential


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCredential:(id)arg0 annotation:(id)arg1 ;


@end


#endif