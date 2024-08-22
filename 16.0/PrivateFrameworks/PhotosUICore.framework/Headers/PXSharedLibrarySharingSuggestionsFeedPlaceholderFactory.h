// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDPLACEHOLDERFACTORY_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDPLACEHOLDERFACTORY_H

@protocol PXFeedPlaceholderFactory;

#import <Foundation/Foundation.h>


@interface PXSharedLibrarySharingSuggestionsFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>



@property (readonly, nonatomic) BOOL supportsDynamicPlaceholderContentSize;


-(id)createPlaceholderViewForFeedWithViewModel:(id)arg0 ;
-(void)_handleDismissActionWithViewModel:(id)arg0 ;
-(void)_handleIdentifyParticipantsActionWithViewModel:(id)arg0 ;


@end


#endif