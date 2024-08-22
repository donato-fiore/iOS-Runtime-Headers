// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCONTACTSUGGESTIONHANDLEANDAPP_H
#define _PSCONTACTSUGGESTIONHANDLEANDAPP_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSContactSuggestionHandleAndApp : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (copy, nonatomic) NSNumber *interactionMechanism; // ivar: _interactionMechanism


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif