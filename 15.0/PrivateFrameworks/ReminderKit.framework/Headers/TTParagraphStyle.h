// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTPARAGRAPHSTYLE_H
#define TTPARAGRAPHSTYLE_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying, NSMutableCopying, TTModelAttributeComparable;

#import <Foundation/Foundation.h>


@interface TTParagraphStyle : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, TTModelAttributeComparable>



@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) BOOL canIndent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int hints; // ivar: _hints
@property (nonatomic) NSUInteger indent; // ivar: _indent
@property (readonly, nonatomic) BOOL isHeader;
@property (readonly, nonatomic) BOOL isList;
@property (nonatomic) BOOL needsListCleanup; // ivar: _needsListCleanup
@property (nonatomic) BOOL needsParagraphCleanup; // ivar: _needsParagraphCleanup
@property (readonly, nonatomic) BOOL preferSingleLine;
@property (nonatomic) NSUInteger startingItemNumber; // ivar: _startingItemNumber
@property (nonatomic) unsigned int style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *trackingUUID;
@property (readonly, nonatomic) BOOL uniqueToLine;
@property (readonly, nonatomic) BOOL wantsFollowingNewLine;
@property (nonatomic) NSInteger writingDirection; // ivar: _writingDirection


+(BOOL)supportsSecureCoding;
+(NSUInteger)textAlignmentForParagraphStyleAlignment:(int)arg0 ;
+(id)defaultParagraphStyle;
+(id)paragraphStyleNamed:(unsigned int)arg0 ;
+(int)paragraphStyleAlignmentForTextAlignment:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModelComparable:(id)arg0 ;
-(BOOL)isEqualToModelParagraphStyle:(id)arg0 ;
-(BOOL)isEqualToParagraphStyle:(id)arg0 ;
-(BOOL)isUnknownStyle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)listBulletInAttributedString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif