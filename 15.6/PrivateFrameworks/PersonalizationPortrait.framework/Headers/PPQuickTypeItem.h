// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPQUICKTYPEITEM_H
#define PPQUICKTYPEITEM_H

@class NSDate, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPQuickTypeItem : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) unsigned int fields; // ivar: _fields
@property (nonatomic) unsigned char flags; // ivar: _flags
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *originatingBundleID; // ivar: _originatingBundleID
@property (copy, nonatomic) NSURL *originatingWebsiteURL; // ivar: _originatingWebsiteURL
@property (nonatomic) NSUInteger predictionAge; // ivar: _predictionAge
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) BOOL shouldAggregate; // ivar: _shouldAggregate
@property (nonatomic) unsigned char source; // ivar: _source
@property (copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)quickTypeItemWithLabel:(id)arg0 value:(id)arg1 name:(id)arg2 date:(id)arg3 fields:(unsigned int)arg4 originatingBundleID:(id)arg5 originatingWebsiteURL:(id)arg6 predictionAge:(NSUInteger)arg7 shouldAggregate:(BOOL)arg8 flags:(unsigned char)arg9 score:(CGFloat)arg10 source:(unsigned char)arg11 sourceIdentifier:(id)arg12 ;
-(BOOL)hasScoreSimilarToItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuickTypeItem:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)reverseCompare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 value:(id)arg1 name:(id)arg2 date:(id)arg3 fields:(unsigned int)arg4 originatingBundleID:(id)arg5 originatingWebsiteURL:(id)arg6 predictionAge:(NSUInteger)arg7 shouldAggregate:(BOOL)arg8 flags:(unsigned char)arg9 score:(CGFloat)arg10 source:(unsigned char)arg11 sourceIdentifier:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif