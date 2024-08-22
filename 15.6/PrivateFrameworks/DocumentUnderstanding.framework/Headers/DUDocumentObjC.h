// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DUDOCUMENTOBJC_H
#define DUDOCUMENTOBJC_H

@class NSString, NSDate, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding10DUDocument.h"

@interface DUDocumentObjC : NSObject {
    _TtC21DocumentUnderstanding10DUDocument *_underlyingDocument;
}


@property (copy, nonatomic) NSString *abstract;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateModified;
@property (copy, nonatomic) NSArray *documentUIElements;
@property (copy, nonatomic) NSString *headline;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *inLanguage;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSURL *significantLink;
@property (copy, nonatomic) NSString *subHeadline;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSURL *thumbnailUrl;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *version;


-(id)init;


@end


#endif