// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCATALOGSYNCANCHOR_H
#define MANAGEDCATALOGSYNCANCHOR_H

@class NSManagedObject, NSString, NSDate;



@interface ManagedCatalogSyncAnchor : NSManagedObject

@property (nonatomic, copy) NSString *build;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *token;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif