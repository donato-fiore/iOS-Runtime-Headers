// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING10DUDOCUMENT_H
#define _TTC21DOCUMENTUNDERSTANDING10DUDOCUMENT_H

@class NSString, NSDate, NSArray, NSURL;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding10DUDocument : NSObject <NSCoding, NSCopying>

 {
    ? headline;
    ? subHeadline;
    ? version;
    ? creator;
    ? abstract;
    ? comment;
    ? text;
    ? inLanguage;
    ? keywords;
    ? identifier;
    ? url;
    ? thumbnailUrl;
    ? significantLink;
    ? dateCreated;
    ? dateModified;
    ? documentUIElements;
}


@property (nonatomic, copy) NSString *abstract;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *creator;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateModified;
@property (nonatomic, copy) NSArray *documentUIElements;
@property (nonatomic, copy) NSString *headline;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *inLanguage;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSURL *significantLink;
@property (nonatomic, copy) NSString *subHeadline;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSURL *thumbnailUrl;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *version;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif