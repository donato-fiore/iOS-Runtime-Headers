// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANPSKIPTONEXTITEM_H
#define SANPSKIPTONEXTITEM_H

@class NSArray;


#import "SADomainCommand.h"

@interface SANPSkipToNextItem : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;


+(id)skipToNextItem;
+(id)skipToNextItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif