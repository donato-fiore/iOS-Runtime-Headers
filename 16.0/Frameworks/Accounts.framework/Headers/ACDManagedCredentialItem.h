// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDMANAGEDCREDENTIALITEM_H
#define ACDMANAGEDCREDENTIALITEM_H

@class NSManagedObject, NSString, NSDate, NSNumber;



@interface ACDManagedCredentialItem : NSManagedObject

@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSNumber *persistent;
@property (retain, nonatomic) NSString *serviceName;




@end


#endif