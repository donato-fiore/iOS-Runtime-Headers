// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGURL_H
#define SGURL_H

@class NSString, NSDate, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SGURL : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSDate *documentDate; // ivar: _documentDate
@property (readonly, nonatomic) NSString *documentIdentifier; // ivar: _documentIdentifier
@property (readonly, nonatomic) CGFloat documentTimeInterval; // ivar: _documentTimeInterval
@property (readonly, nonatomic) NSString *documentTitle; // ivar: _documentTitle
@property (readonly, nonatomic) unsigned char flags; // ivar: _flags
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) NSDate *receivedAt; // ivar: _receivedAt
@property (readonly, nonatomic) NSString *receivedFromHandle; // ivar: _receivedFromHandle
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)feedbackDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 receivedFromHandle:(id)arg2 bundleIdentifier:(id)arg3 groupIdentifier:(id)arg4 documentIdentifier:(id)arg5 documentTitle:(id)arg6 documentDate:(id)arg7 documentTimeInterval:(CGFloat)arg8 receivedAt:(id)arg9 flags:(unsigned char)arg10 ;
-(id)nonFeedbackFlagDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif