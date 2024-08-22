// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSMEDIASUGGESTIONSTOREUPDATERECORD_H
#define PLUSMEDIASUGGESTIONSTOREUPDATERECORD_H

@class NSManagedObject, NSString, NSDate;



@interface PlusMediaSuggestionStoreUpdateRecord : NSManagedObject

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSDate *timestamp;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif