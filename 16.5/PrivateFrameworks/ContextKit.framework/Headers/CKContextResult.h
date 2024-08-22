// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTRESULT_H
#define CKCONTEXTRESULT_H

@class NSArray, NSString, NSDictionary, NSDateComponents, NSOrderedSet, NSSet, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKContextResult : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGPoint absoluteOriginOnScreen; // ivar: _absoluteOriginOnScreen
@property (copy, nonatomic) NSArray *associatedResults; // ivar: _associatedResults
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSString *debug; // ivar: _debug
@property (nonatomic, getter=isExactMatch) BOOL exactMatch; // ivar: _exactMatch
@property (copy, nonatomic) NSDictionary *extractedAddressComponents; // ivar: _extractedAddressComponents
@property (copy, nonatomic) NSDateComponents *extractedEndDateComponents; // ivar: _extractedEndDateComponents
@property (copy, nonatomic) NSDateComponents *extractedStartDateComponents; // ivar: _extractedStartDateComponents
@property (nonatomic) CGRect frameInWindow; // ivar: _frameInWindow
@property (nonatomic) NSInteger minPrefix; // ivar: _minPrefix
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (copy, nonatomic) NSString *portraitId;
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (copy, nonatomic) NSOrderedSet *relatedItems; // ivar: _relatedItems
@property (copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (copy, nonatomic) NSSet *tags; // ivar: _tags
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *topicId; // ivar: _topicId
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 query:(id)arg1 url:(id)arg2 category:(id)arg3 ;
-(id)toJSONSerializableDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif