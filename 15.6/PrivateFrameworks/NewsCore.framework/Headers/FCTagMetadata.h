// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTAGMETADATA_H
#define FCTAGMETADATA_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCTagMetadata : NSObject

@property (readonly, nonatomic) NSString *coverImage;
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *feedNavImage;
@property (readonly, nonatomic) NSString *feedNavImageHQ;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isArticleMetadata; // ivar: _isArticleMetadata
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameImage; // ivar: _nameImage
@property (readonly, nonatomic) NSInteger nameImageBaselineShift;
@property (retain, nonatomic) NSString *nameImageForDarkBackground; // ivar: _nameImageForDarkBackground
@property (retain, nonatomic) NSString *nameImageMask; // ivar: _nameImageMask
@property (retain, nonatomic) NSString *nameImageMetadata; // ivar: _nameImageMetadata
@property (readonly, nonatomic) NSInteger nameImageScaleFactor;
@property (readonly, nonatomic) NSString *publisherPaidAuthorizationURL;
@property (readonly, nonatomic) NSString *publisherPaidVerificationURL;
@property (readonly, nonatomic) NSUInteger tagType; // ivar: _tagType


-(id)init;
-(id)initWithIdentifier:(id)arg0 tagType:(NSUInteger)arg1 dictionary:(id)arg2 isArticleMetadata:(BOOL)arg3 ;


@end


#endif