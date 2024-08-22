// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTBRICKVIEW_H
#define ICATTACHMENTBRICKVIEW_H

@class UIView, ICAttachment, NSHashTable, NSString, NSLayoutConstraint, UIColor, NSRegularExpression, LPLinkView;
@protocol LPLinkViewDelegate, LPAudioPlayer;


#import "ICAddAttachmentsManagerAttachmentInfo.h"

@interface ICAttachmentBrickView : UIView <LPLinkViewDelegate, LPAudioPlayer>



@property (weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) NSHashTable *audioPlayerClients; // ivar: _audioPlayerClients
@property (readonly, nonatomic) CGSize computedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat effectiveLayoutCornerRadius;
@property (nonatomic) BOOL hasPerformedInitialLayout; // ivar: _hasPerformedInitialLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (nonatomic, getter=isInsideSystemPaper) BOOL insideSystemPaper; // ivar: _insideSystemPaper
@property (readonly, nonatomic) BOOL isMetadataComplete;
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (nonatomic) float playbackProgress; // ivar: _playbackProgress
@property (nonatomic) NSUInteger playerState; // ivar: _playerState
@property (readonly, nonatomic) float progress;
@property (nonatomic) BOOL selected; // ivar: _selected
@property (weak, nonatomic) ICAddAttachmentsManagerAttachmentInfo *shareExtensionAttachmentInfo; // ivar: _shareExtensionAttachmentInfo
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL waitingForMetadata; // ivar: _waitingForMetadata
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


+(BOOL)usesSmallSizeForAttachment:(id)arg0 withMetadata:(id)arg1 type:(NSUInteger)arg2 insideSystemPaper:(BOOL)arg3 ;
+(struct CGSize )defaultBrickSize;
+(struct CGSize )sizeForAttachment:(id)arg0 usesSmallSize:(BOOL)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)_linkView:(id)arg0 contextMenuConfigurationForSuggestedConfiguration:(id)arg1 ;
-(id)_linkView:(id)arg0 playerForAudio:(id)arg1 ;
-(id)accessibilityElements;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)quickLookTransitionView;
-(void)addClient:(id)arg0 ;
-(void)adjustSizeIfNecessary;
-(void)applicationDidBecomeActive;
-(void)attachmentDidLoadNotification:(id)arg0 ;
-(void)attachmentPreviewImagesDidUpdateNotification:(id)arg0 ;
-(void)constrainViews;
-(void)dealloc;
-(void)didFailFetchingMetadataNotification:(id)arg0 ;
-(void)displayFilePreview;
-(void)displayGenericURLPreview;
-(void)displayRemoteAttachmentPreview;
-(void)displayScannedDocumentsPreview;
-(void)displaySynapseAttachmentPreview;
-(void)displayUnsupportedAttachmentPreview;
-(void)initialAttachmentPreviewDidLoad:(id)arg0 ;
-(void)layoutSubviews;
-(void)linkView:(id)arg0 didFetchMetadata:(id)arg1 ;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)mediaDidLoadNotification:(id)arg0 ;
-(void)notifyClientsAboutSizeChangesIfNecessary;
-(void)pause;
-(void)play;
-(void)playbackPausedNotification:(id)arg0 ;
-(void)playbackStartedNotification:(id)arg0 ;
-(void)playbackStoppedNotification:(id)arg0 ;
-(void)prepareForReuse;
-(void)progressChangedNotification:(id)arg0 ;
-(void)reloadData;
-(void)removeClient:(id)arg0 ;
-(void)reset;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAudioClientsProgress:(float)arg0 ;
-(void)updateAudioClientsState:(NSUInteger)arg0 ;
-(void)updateSearchResultBackgroundColorIfNecessary;
-(void)updateTitle;
-(void)updateUIWithMetadata:(id)arg0 ;


@end


#endif