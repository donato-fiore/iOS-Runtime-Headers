// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTIMAGESAVEREQUEST_H
#define CNCONTACTIMAGESAVEREQUEST_H

@class NSString, NSArray, NSPersistentStoreRequest;
@protocol CNContactImageRequest;

#import <Foundation/Foundation.h>


@interface CNContactImageSaveRequest : NSObject <CNContactImageRequest>



@property (readonly, nonatomic) NSString *attributeName; // ivar: _attributeName
@property (retain, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *images; // ivar: _images
@property (readonly, nonatomic) NSInteger operationType; // ivar: _operationType
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (readonly) Class superclass;


+(id)saveRequestToCreateImage:(id)arg0 forContactIdentifier:(id)arg1 ;
+(id)saveRequestToCreateImages:(id)arg0 forContactIdentifier:(id)arg1 ;
+(id)saveRequestToDeleteImageForIdentifier:(id)arg0 ;
+(id)saveRequestToDeleteImagesForContactIdentifiers:(id)arg0 ;
-(id)createStoreRequest;
-(id)deleteStoreRequest;
-(id)initWithContactImages:(id)arg0 contactIdentifiers:(id)arg1 attributeName:(id)arg2 operationType:(NSInteger)arg3 ;


@end


#endif