// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDKEYCERTIFICATE_H
#define MANAGEDKEYCERTIFICATE_H

@class NSManagedObject, NSData, NSString;



@interface ManagedKeyCertificate : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *remoteURL;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif