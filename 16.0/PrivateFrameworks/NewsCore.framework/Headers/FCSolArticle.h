// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSOLARTICLE_H
#define FCSOLARTICLE_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL accessible; // ivar: _accessible
@property (nonatomic) BOOL evergreen; // ivar: _evergreen
@property (nonatomic) NSUInteger groupingReason; // ivar: _groupingReason
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *publisherID; // ivar: _publisherID
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSSet *whitelistedTopicIDs; // ivar: _whitelistedTopicIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 publisherID:(id)arg1 accessible:(BOOL)arg2 evergreen:(BOOL)arg3 whitelistedTopicIDs:(id)arg4 ;
-(id)initWithID:(id)arg0 publisherID:(id)arg1 score:(CGFloat)arg2 accessible:(BOOL)arg3 evergreen:(BOOL)arg4 ;
-(id)initWithID:(id)arg0 publisherID:(id)arg1 score:(CGFloat)arg2 accessible:(BOOL)arg3 evergreen:(BOOL)arg4 whitelistedTopicIDs:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif