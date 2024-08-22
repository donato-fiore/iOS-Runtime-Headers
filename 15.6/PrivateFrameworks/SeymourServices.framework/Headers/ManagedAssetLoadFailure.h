// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDASSETLOADFAILURE_H
#define MANAGEDASSETLOADFAILURE_H

@class NSManagedObject, NSString, NSDate;



@interface ManagedAssetLoadFailure : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *remoteURL;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif