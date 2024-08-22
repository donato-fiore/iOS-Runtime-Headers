// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSBOOKMARKFOLDERTOUCHICONPROVIDERREQUESTINFO_H
#define WBSBOOKMARKFOLDERTOUCHICONPROVIDERREQUESTINFO_H

@class NSMutableArray, NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject {
    NSMutableArray *_thumbnailImages;
    NSMutableArray *_backgroundColors;
}


@property (readonly, copy, nonatomic) NSArray *backgroundColors;
@property (nonatomic) BOOL hasScheduledCoalescedUpdate; // ivar: _hasScheduledCoalescedUpdate
@property (copy, nonatomic) NSSet *subrequestTokens; // ivar: _subrequestTokens
@property (readonly, copy, nonatomic) NSArray *thumbnailImages;


-(id)init;
-(void)setBackgroundColor:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setThumbnailImage:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif