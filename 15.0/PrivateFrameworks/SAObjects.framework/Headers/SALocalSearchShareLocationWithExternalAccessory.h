// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHSHARELOCATIONWITHEXTERNALACCESSORY_H
#define SALOCALSEARCHSHARELOCATIONWITHEXTERNALACCESSORY_H



#import "SADomainCommand.h"
#import "SALocalSearchMapItem.h"

@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;
@property (nonatomic) BOOL useNavigationDestination;


+(id)shareLocationWithExternalAccessory;
+(id)shareLocationWithExternalAccessoryWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif