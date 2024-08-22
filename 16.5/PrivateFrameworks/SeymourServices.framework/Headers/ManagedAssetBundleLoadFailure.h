// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDASSETBUNDLELOADFAILURE_H
#define MANAGEDASSETBUNDLELOADFAILURE_H

@class NSManagedObject, NSString, NSDate;



@interface ManagedAssetBundleLoadFailure : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *reason;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif