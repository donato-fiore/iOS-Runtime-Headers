// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPCHANGEDETAILS_H
#define TSWPCHANGEDETAILS_H

@class NSString, TSKAnnotationAuthor, NSDate;
@protocol TSDChangeDetails;

#import <Foundation/Foundation.h>

#import "TSWPChange.h"

@interface TSWPChangeDetails : NSObject <TSDChangeDetails>



@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) int annotationType;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) TSWPChange *change; // ivar: _change
@property (readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property (retain, nonatomic) NSString *changeTrackingContentString; // ivar: _changeTrackingContentString
@property (retain, nonatomic) NSString *changeTrackingTitleString; // ivar: _changeTrackingTitleString
@property (readonly, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *dateForLastChangeStringUpdate; // ivar: _dateForLastChangeStringUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *formattedString; // ivar: _formattedString
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *parentUUID;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToObject:(id)arg0 ;
-(BOOL)isFloatingComment;
-(BOOL)isInDocument;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChange:(id)arg0 ;
-(struct _NSRange )p_rangeInStorage;
-(void)commentWillBeAddedToDocumentRoot;


@end


#endif