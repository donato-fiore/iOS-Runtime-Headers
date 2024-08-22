// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDSOCIALMEDIAHANDLE_H
#define MANAGEDSOCIALMEDIAHANDLE_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedSocialMediaHandle : NSManagedObject

@property (nonatomic, retain) NSSet *contributor;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, retain) NSSet *trainerMetadata;
@property (nonatomic, copy) NSString *url;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif