// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDALBUMACTIVITYACCOMPANYINGINBOXGADGETPROVIDER_H
#define PXSHAREDALBUMACTIVITYACCOMPANYINGINBOXGADGETPROVIDER_H

@class NSDate;
@protocol PXForYouRankable;


#import "PXHorizontalCollectionGadgetProvider.h"

@interface PXSharedAlbumActivityAccompanyingInboxGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>



@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;


-(id)init;
-(id)initWithContentGadgetProvider:(id)arg0 title:(id)arg1 ;
-(id)initWithContentGadgetProvider:(id)arg0 title:(id)arg1 horizontalCollectionGadgetClass:(Class)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 contentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3 ;


@end


#endif