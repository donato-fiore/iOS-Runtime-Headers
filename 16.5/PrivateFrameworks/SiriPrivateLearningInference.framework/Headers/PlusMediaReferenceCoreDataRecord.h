// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSMEDIAREFERENCECOREDATARECORD_H
#define PLUSMEDIAREFERENCECOREDATARECORD_H

@class NSManagedObject, NSString;


#import "PlusMediaSuggestionCoreDataRecord.h"
#import "PlusMediaReferenceSourceAppCoreDataRecord.h"
#import "PlusStorefrontCoreDataRecord.h"

@interface PlusMediaReferenceCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *mediaId;
@property (nonatomic, retain) PlusMediaSuggestionCoreDataRecord *mediaSuggestion;
@property (nonatomic, retain) PlusMediaReferenceSourceAppCoreDataRecord *sourceApp;
@property (nonatomic, retain) PlusStorefrontCoreDataRecord *storefront;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif