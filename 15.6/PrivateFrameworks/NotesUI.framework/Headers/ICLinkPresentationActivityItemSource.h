// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLINKPRESENTATIONACTIVITYITEMSOURCE_H
#define ICLINKPRESENTATIONACTIVITYITEMSOURCE_H

@class NSString, LPFileMetadata, LPLinkMetadata;
@protocol UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface ICLinkPresentationActivityItemSource : NSObject <UIActivityItemLinkPresentationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) LPFileMetadata *fileMetadata; // ivar: _fileMetadata
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (readonly) Class superclass;


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)detail;
-(id)iconImage;
-(id)title;
-(void)setIconImage:(id)arg0 ;


@end


#endif