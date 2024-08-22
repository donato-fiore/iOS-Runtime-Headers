// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDCONTACTINFO_H
#define GKCDCONTACTINFO_H

@class NSManagedObject, NSString;



@interface GKCDContactInfo : NSManagedObject

@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *namePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (copy, nonatomic) NSString *nickname;


+(id)fetchRequest;


@end


#endif