// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACREATEVOXLIST_H
#define SACREATEVOXLIST_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SACreateVOXList : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *introductions;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) NSInteger pageSize;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)createVOXList;
+(id)createVOXListWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif