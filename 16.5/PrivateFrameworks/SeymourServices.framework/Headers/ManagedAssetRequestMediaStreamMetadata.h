// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDASSETREQUESTMEDIASTREAMMETADATA_H
#define MANAGEDASSETREQUESTMEDIASTREAMMETADATA_H

@class NSManagedObject, NSString;



@interface ManagedAssetRequestMediaStreamMetadata : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *thumbnailURL;
@property (nonatomic, copy) NSString *title;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif