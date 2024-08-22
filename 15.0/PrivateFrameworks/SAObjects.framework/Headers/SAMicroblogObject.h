// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMICROBLOGOBJECT_H
#define SAMICROBLOGOBJECT_H

@class NSURL, NSString, NSDate, NSDictionary, NSNumber, NSArray;


#import "SADomainObject.h"
#import "SALocation.h"
#import "SAPersonAttribute.h"

@interface SAMicroblogObject : SADomainObject

@property (copy, nonatomic) NSURL *attachment;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDictionary *hashtagAlternatives;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSURL *refereceId;
@property (retain, nonatomic) SAPersonAttribute *sender;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *socialProfileReferences;
@property (copy, nonatomic) NSNumber *useLocation;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif