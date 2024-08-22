// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDEFAULTWIDGETSTACK_H
#define ATXDEFAULTWIDGETSTACK_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem;

#import <Foundation/Foundation.h>


@interface ATXDefaultWidgetStack : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *extraLargeDefaultStack; // ivar: _extraLargeDefaultStack
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *largeDefaultStack; // ivar: _largeDefaultStack
@property (copy, nonatomic) NSArray *mediumDefaultStack; // ivar: _mediumDefaultStack
@property (copy, nonatomic) NSArray *smallDefaultStack; // ivar: _smallDefaultStack
@property (nonatomic) NSUInteger suggestedSize; // ivar: _suggestedSize
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_JSONCompatible:(id)arg0 ;
-(id)_JSONCompatible:(id)arg0 compact:(BOOL)arg1 ;
-(id)compactDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif