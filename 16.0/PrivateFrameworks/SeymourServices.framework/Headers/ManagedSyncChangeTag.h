// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDSYNCCHANGETAG_H
#define MANAGEDSYNCCHANGETAG_H

@class NSManagedObject, NSString;



@interface ManagedSyncChangeTag : NSManagedObject

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, copy) NSString *syncIdentifier;
@property (nonatomic, copy) NSString *zoneName;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif