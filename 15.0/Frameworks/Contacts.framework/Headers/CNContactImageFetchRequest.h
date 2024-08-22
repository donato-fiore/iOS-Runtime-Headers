// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTIMAGEFETCHREQUEST_H
#define CNCONTACTIMAGEFETCHREQUEST_H

@class NSArray, NSString, NSPersistentStoreRequest;
@protocol CNContactImageRequest;

#import <Foundation/Foundation.h>


@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest>



@property (retain, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (readonly) Class superclass;


+(id)predicateForImagesMatchingContactIdentifiers:(id)arg0 ;
+(id)recentImagesRequestForContactIdenfitiers:(id)arg0 ;
-(id)initWithContactIdentifiers:(id)arg0 ;


@end


#endif