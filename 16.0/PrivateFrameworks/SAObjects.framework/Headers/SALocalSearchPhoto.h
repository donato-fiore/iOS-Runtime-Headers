// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHPHOTO_H
#define SALOCALSEARCHPHOTO_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIAppPunchOut.h"

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *fullsize;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *largeSize;
@property (copy, nonatomic) NSURL *maximumSize;
@property (retain, nonatomic) SAUIAppPunchOut *photoPunchOut;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *thumbnail;


+(id)photo;
+(id)photoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif