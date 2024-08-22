// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYUIPARTICIPANT_H
#define PXSHAREDLIBRARYUIPARTICIPANT_H

@class NSString, CNContact, NSPersonNameComponents;
@protocol NSCopying, PXFaceTileImageCombinerItem;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryUIParticipant : NSObject <NSCopying, PXFaceTileImageCombinerItem>



@property (readonly, nonatomic) NSUInteger addressKind; // ivar: _addressKind
@property (retain, nonatomic) NSString *appleIDAddress; // ivar: _appleIDAddress
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly) Class superclass;


+(int)_fetchImageForContact:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 isRTL:(BOOL)arg3 resultHandler:(id)arg4 ;
+(int)_fetchImageForEmailAddress:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 isRTL:(BOOL)arg3 resultHandler:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEmailAddress:(id)arg0 contact:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg0 contact:(id)arg1 ;
-(int)fetchImageForTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 isRTL:(BOOL)arg2 resultHandler:(id)arg3 ;
-(void)px_requestImageWithTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 isRTL:(BOOL)arg2 resultHandler:(id)arg3 ;


@end


#endif