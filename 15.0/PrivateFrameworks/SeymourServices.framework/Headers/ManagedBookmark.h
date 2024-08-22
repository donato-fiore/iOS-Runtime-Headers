// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDBOOKMARK_H
#define MANAGEDBOOKMARK_H

@class NSManagedObject, NSDate, NSString;



@interface ManagedBookmark : NSManagedObject

@property (nonatomic, copy) NSDate *dateBookmarked;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, copy) NSString *referenceType;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif