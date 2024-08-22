// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLULOOKUPITEMCONTENT_H
#define MLULOOKUPITEMCONTENT_H

@class NSURL, UIViewController, CNContact;

#import <Foundation/Foundation.h>


@interface MLULookupItemContent : NSObject

@property (nonatomic) NSUInteger commitType; // ivar: _commitType
@property (retain, nonatomic) NSURL *commitURL; // ivar: _commitURL
@property (retain, nonatomic) UIViewController *commitViewController; // ivar: _commitViewController
@property (readonly, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIViewController *previewViewController; // ivar: _previewViewController
@property BOOL valid; // ivar: _valid


+(id)contentWithAttachments:(id)arg0 currentAttachmentIndex:(NSUInteger)arg1 ;
+(id)contentWithText:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)contentWithURL:(id)arg0 result:(struct __DDResult *)arg1 documentProperties:(id)arg2 ;
-(BOOL)commitPreviewInController:(id)arg0 ;
-(BOOL)wantsSeamlessCommit;
-(id)children;
-(id)requiredEntitlements;
-(void)dismissViewController;
-(void)setupViewControllerInCommitMode;


@end


#endif