// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSCRIPTCOLLECTIONSUPPLEMENTARYVIEW_H
#define CKTRANSCRIPTCOLLECTIONSUPPLEMENTARYVIEW_H

@class UICollectionReusableView, NSString;
@protocol CKTranscriptSupplementaryViewProtocol;



@interface CKTranscriptCollectionSupplementaryView : UICollectionReusableView <CKTranscriptSupplementaryViewProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)reuseIdentifier;
+(id)supplementaryViewKindForGUID:(id)arg0 ;
+(id)supplementaryViewKindPrefix;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;


@end


#endif