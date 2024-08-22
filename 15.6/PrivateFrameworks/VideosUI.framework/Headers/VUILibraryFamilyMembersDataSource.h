// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYFAMILYMEMBERSDATASOURCE_H
#define VUILIBRARYFAMILYMEMBERSDATASOURCE_H

@class NSArray;


#import "VUILibraryDataSource.h"
#import "VUIMediaAPIClient.h"

@interface VUILibraryFamilyMembersDataSource : VUILibraryDataSource

@property (retain, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (retain, nonatomic) VUIMediaAPIClient *mediaClient; // ivar: _mediaClient


-(id)init;
-(void)_orderFamilyMembersByFirstName;
-(void)startFetch;


@end


#endif