// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGORIGIN_H
#define SGORIGIN_H

@class NSString, NSArray, NSDate, CSPerson, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SGSimpleNamedEmailAddress.h"

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_contextSnippet;
    _NSRange _contextSnippetRange;
    NSString *_operatingSystemVersion;
    BOOL _shouldShowOperatingSystemVersion;
}


@property (readonly, nonatomic) NSArray *bcc; // ivar: _bcc
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSArray *cc; // ivar: _cc
@property (readonly, nonatomic) NSString *contextSnippet;
@property (readonly, nonatomic) _NSRange contextSnippetRange;
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *externalKey; // ivar: _externalKey
@property (readonly, nonatomic) SGSimpleNamedEmailAddress *from;
@property (readonly, nonatomic, getter=isFromForwardedMessage) BOOL fromForwardedMessage; // ivar: _fromForwardedMessage
@property (readonly, nonatomic) CSPerson *fromPerson; // ivar: _fromPerson
@property (readonly, nonatomic) BOOL isSent; // ivar: _isSent
@property (readonly, nonatomic) NSString *localizedApplicationName; // ivar: _localizedApplicationName
@property (readonly, nonatomic) NSString *sourceKey; // ivar: _sourceKey
@property (readonly, nonatomic) NSString *teamId; // ivar: _teamId
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSArray *to; // ivar: _to
@property (readonly, nonatomic) NSArray *toPeople; // ivar: _toPeople
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSURL *url;


+(BOOL)supportsSecureCoding;
+(id)originWithType:(NSUInteger)arg0 sourceKey:(id)arg1 externalKey:(id)arg2 bundleId:(id)arg3 fromForwardedMessage:(BOOL)arg4 ;
+(id)originWithType:(NSUInteger)arg0 sourceKey:(id)arg1 externalKey:(id)arg2 fromForwardedMessage:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrigin:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 sourceKey:(id)arg1 externalKey:(id)arg2 bundleId:(id)arg3 fromForwardedMessage:(BOOL)arg4 ;
-(id)universalURL;
-(void)_resolveAppName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif