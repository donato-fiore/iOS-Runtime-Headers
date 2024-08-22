// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPDOCUMENTPURCHASEEVENT_H
#define VUIAPPDOCUMENTPURCHASEEVENT_H

@class NSString;
@protocol NSCopying;


#import "VUIAppDocumentUpdateEvent.h"

@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <NSCopying>



@property (copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID


-(id)_purchaseEventDescriptor;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithPurchaseEventDescriptor:(id)arg0 ;


@end


#endif