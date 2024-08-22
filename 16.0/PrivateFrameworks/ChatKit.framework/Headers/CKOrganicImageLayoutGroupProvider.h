// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKORGANICIMAGELAYOUTGROUPPROVIDER_H
#define CKORGANICIMAGELAYOUTGROUPPROVIDER_H

@class NSString;
@protocol CKTranscriptCustomLayoutGroupProvider;

#import <Foundation/Foundation.h>


@interface CKOrganicImageLayoutGroupProvider : NSObject <CKTranscriptCustomLayoutGroupProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_rotationForChatItem:(id)arg0 leftRotated:(BOOL)arg1 ;
-(CGFloat)_setLayoutRecipesForChatItems:(id)arg0 ;
-(CGFloat)scalarForSize:(struct CGSize )arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)_orientationForChatItemSize:(struct CGSize )arg0 ;
-(id)_intersectSpecForIndex:(NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(id)_startOffsetSpecForCount:(NSUInteger)arg0 ;
-(id)_startRotationSpec;
-(id)layoutGroupForDatasourceItems:(id)arg0 environment:(id)arg1 layoutItems:(id)arg2 ;
-(struct CGSize )_targetSizeForChatItem:(id)arg0 totalItemCount:(NSUInteger)arg1 ;


@end


#endif