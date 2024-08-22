// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASOCIALPROFILE_H
#define SASOCIALPROFILE_H

@class NSString;
@protocol SAAceSerializable, SAAceComparable;


#import "AceObject.h"

@interface SASocialProfile : AceObject <SAAceSerializable, SAAceComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *userName;


+(id)socialProfile;
+(id)socialProfileWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif