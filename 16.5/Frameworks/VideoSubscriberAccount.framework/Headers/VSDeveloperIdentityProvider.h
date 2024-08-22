// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSDEVELOPERIDENTITYPROVIDER_H
#define VSDEVELOPERIDENTITYPROVIDER_H

@class NSManagedObject, NSArray, NSString;



@interface VSDeveloperIdentityProvider : NSManagedObject

@property (copy, nonatomic) NSArray *authenticationSchemes;
@property (copy, nonatomic) NSString *authenticationURL;
@property (copy, nonatomic) NSString *certificateURL;
@property (copy, nonatomic) NSString *nameForSorting;
@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *uniqueID;




@end


#endif