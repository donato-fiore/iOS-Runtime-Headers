// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSHOWPERSONINTERACTIONSINTENT_H
#define INSHOWPERSONINTERACTIONSINTENT_H

@class NSString;
@protocol INShowPersonInteractionsIntentExport;


#import "INIntent.h"
#import "INPerson.h"

@interface INShowPersonInteractionsIntent : INIntent <INShowPersonInteractionsIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *focusItemIdentifier; // ivar: _focusItemIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INPerson *person; // ivar: _person
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPerson:(id)arg0 focusItemIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif