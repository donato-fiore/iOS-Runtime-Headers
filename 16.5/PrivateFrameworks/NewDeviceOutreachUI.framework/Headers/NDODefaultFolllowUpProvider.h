// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDODEFAULTFOLLLOWUPPROVIDER_H
#define NDODEFAULTFOLLLOWUPPROVIDER_H

@class NSString;
@protocol NDOFollowUpProvider;

#import <Foundation/Foundation.h>


@interface NDODefaultFolllowUpProvider : NSObject <NDOFollowUpProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)postFollowUpItem:(id)arg0 error:(*id)arg1 ;
-(id)pendingFollowUpItems:(*id)arg0 ;


@end


#endif