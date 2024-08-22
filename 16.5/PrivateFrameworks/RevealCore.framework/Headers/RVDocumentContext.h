// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RVDOCUMENTCONTEXT_H
#define RVDOCUMENTCONTEXT_H

@class NSString, NSDate, NSTimeZone, NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RVDocumentContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *authorContactUUID; // ivar: authorContactUUID
@property (copy, nonatomic) NSString *authorEmailAddress; // ivar: authorEmailAddress
@property (copy, nonatomic) NSString *authorName; // ivar: authorName
@property (copy, nonatomic) NSDate *contentReferenceDate; // ivar: contentReferenceDate
@property (copy, nonatomic) NSTimeZone *contentReferenceTimeZone; // ivar: contentReferenceTimeZone
@property (copy, nonatomic) NSString *contentSubject; // ivar: contentSubject
@property (copy, nonatomic) NSString *coreSpotlightUniqueIdentifier; // ivar: coreSpotlightUniqueIdentifier
@property (copy, nonatomic) NSURL *documentURL; // ivar: documentURL
@property (copy, nonatomic) NSArray *existingDDResultsList; // ivar: existingDDResultsList
@property (copy, nonatomic) NSString *selectedText; // ivar: selectedText


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNameAndEmailWithRawSenderField:(id)arg0 ;


@end


#endif