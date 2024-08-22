// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDROPBOXACCESSRESOURCE_H
#define WFDROPBOXACCESSRESOURCE_H

@class NSArray;


#import "WFAccountAccessResource.h"

@interface WFDropboxAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;


-(Class)accountClass;
-(id)associatedAppIdentifier;
-(id)initWithDefinition:(id)arg0 ;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif