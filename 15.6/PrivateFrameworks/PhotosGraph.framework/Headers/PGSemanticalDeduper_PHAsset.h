// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSEMANTICALDEDUPER_PHASSET_H
#define PGSEMANTICALDEDUPER_PHASSET_H

@class PHPhotoLibrary;


#import "PGSemanticalDeduper.h"

@interface PGSemanticalDeduper_PHAsset : PGSemanticalDeduper {
    PHPhotoLibrary *_photoLibrary;
}




-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)sceneprintByItemIdentifierWithItems:(id)arg0 ;


@end


#endif