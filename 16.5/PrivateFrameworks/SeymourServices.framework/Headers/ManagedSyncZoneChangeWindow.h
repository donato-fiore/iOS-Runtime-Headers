// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDSYNCZONECHANGEWINDOW_H
#define MANAGEDSYNCZONECHANGEWINDOW_H

@class NSManagedObject, NSData, NSString;



@interface ManagedSyncZoneChangeWindow : NSManagedObject

@property (nonatomic, copy) NSData *changeWindow;
@property (nonatomic, copy) NSString *zoneName;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif