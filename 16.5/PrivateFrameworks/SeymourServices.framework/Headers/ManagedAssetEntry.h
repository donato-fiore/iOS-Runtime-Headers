// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDASSETENTRY_H
#define MANAGEDASSETENTRY_H

@class NSManagedObject, NSString;



@interface ManagedAssetEntry : NSManagedObject

@property (nonatomic) int loadStatus;
@property (nonatomic, copy) NSString *localURL;
@property (nonatomic, copy) NSString *remoteURL;
@property (nonatomic) NSInteger size;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif