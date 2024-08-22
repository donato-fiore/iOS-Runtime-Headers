// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPSECTIONEDIDENTIFIERLISTPROXYENTRY_H
#define _MPSECTIONEDIDENTIFIERLISTPROXYENTRY_H

@class NSString;
@protocol MPSectionedIdentifierListEnumerationResult;

#import <Foundation/Foundation.h>


@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult>



@property (readonly, nonatomic) NSInteger branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entryType; // ivar: _entryType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)endEntry;
+(id)startEntry;
-(id)itemResult;
-(id)trackingEntryResult;


@end


#endif