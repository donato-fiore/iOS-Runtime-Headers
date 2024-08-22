// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDASSETRESUMABLELOAD_H
#define MANAGEDASSETRESUMABLELOAD_H

@class NSManagedObject, NSString;



@interface ManagedAssetResumableLoad : NSManagedObject

@property (nonatomic) NSInteger downloadToken;
@property (nonatomic, copy) NSString *localURL;
@property (nonatomic, copy) NSString *remoteURL;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif