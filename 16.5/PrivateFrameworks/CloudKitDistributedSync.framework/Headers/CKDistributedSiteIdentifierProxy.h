// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDISTRIBUTEDSITEIDENTIFIERPROXY_H
#define CKDISTRIBUTEDSITEIDENTIFIERPROXY_H

@protocol CKXReadStructProxy;


#import "CKXStructProxyBase.h"

@interface CKDistributedSiteIdentifierProxy : CKXStructProxyBase <CKXReadStructProxy>



@property (readonly, nonatomic) NSUInteger size;


-(NSUInteger)identifierSize;
-(NSUInteger)modifierSize;
-(id)identifier;
-(id)modifier;
-(id)siteIdentifier;
-(void)copyIdentifierBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;
-(void)copyModifierBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 ;


@end


#endif