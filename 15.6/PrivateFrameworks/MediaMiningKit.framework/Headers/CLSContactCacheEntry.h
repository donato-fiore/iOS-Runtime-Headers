// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCONTACTCACHEENTRY_H
#define CLSCONTACTCACHEENTRY_H

@class NSManagedObject, NSString;



@interface CLSContactCacheEntry : NSManagedObject

@property (nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID;
@property (nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL hasPicture;
@property (nonatomic) CGFloat updateTimestamp;


+(id)entityName;
-(id)cachedContact;


@end


#endif