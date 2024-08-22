// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPDOCUMENTPURCHASEEVENTDESCRIPTOR_H
#define VUIAPPDOCUMENTPURCHASEEVENTDESCRIPTOR_H

@class NSString;


#import "VUIAppDocumentUpdateEventDescriptor.h"

@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCanonicalID:(id)arg0 ;
-(id)initWithEventType:(NSUInteger)arg0 ;


@end


#endif