// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECSUBJECT_H
#define ECSUBJECT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface ECSubject : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable>

 {
    NSInteger _hasReplyPrefixState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) BOOL hasPrefix; // ivar: _hasPrefix
@property (readonly, nonatomic) BOOL hasReplyPrefix;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic) NSUInteger prefixLength; // ivar: _prefixLength
@property (readonly, copy, nonatomic) NSString *subjectString;
@property (copy, nonatomic) NSString *subjectWithoutPrefix; // ivar: _subjectWithoutPrefix
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_prefixTruncatedToMaximumAllowableSize:(id)arg0 ;
+(id)_subjectTruncatedToMaximumAllowableSize:(id)arg0 ;
+(id)_uniqueString:(id)arg0 type:(NSInteger)arg1 ;
+(id)subjectWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isEqualToSubject:(id)arg0 ;
-(BOOL)isEqualToSubjectIgnoringPrefix:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrefix:(id)arg0 subjectWithoutPrefix:(id)arg1 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif