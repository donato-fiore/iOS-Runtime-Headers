// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMTHREADSCOPE_H
#define EMTHREADSCOPE_H

@class NSString, NSPredicate;
@protocol EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "EMMailboxScope.h"

@interface EMThreadScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)cachedSelf;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailboxScope:(id)arg0 filterPredicate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif