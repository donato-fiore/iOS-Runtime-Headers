// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTABGROUPICONREQUEST_H
#define WBSTABGROUPICONREQUEST_H

@class NSString, NSArray;
@protocol WBSIconRequest;


#import "WBSSiteMetadataRequest.h"

@interface WBSTabGroupIconRequest : WBSSiteMetadataRequest <WBSIconRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize sizeForDrawing;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *tabGroupUUID; // ivar: _tabGroupUUID
@property (readonly, copy, nonatomic) NSArray *tabs; // ivar: _tabs
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithTabGroup:(id)arg0 ;


@end


#endif