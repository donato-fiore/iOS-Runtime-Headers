// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNLINKEDCONTACTSPREDICATE_H
#define CNLINKEDCONTACTSPREDICATE_H

@class NSString;
@protocol CNSuggestedContactPredicate;


#import "CNPredicate.h"
#import "CNContact.h"

@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate>



@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif