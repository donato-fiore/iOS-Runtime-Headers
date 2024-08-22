// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBMASTERINFO_H
#define PBMASTERINFO_H

@class NSMutableArray, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PDSlideMaster.h"

@interface PBMasterInfo : NSObject {
    PDSlideMaster *mSlideMaster;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary *mLayoutMap;
    *void mSrcTextStyling;
    NSMutableDictionary *mXmlLayoutMap;
}


@property (nonatomic) BOOL useXmlBlobs; // ivar: mUseXmlBlobs
@property (nonatomic) unsigned int xmlMainMasterId; // ivar: mXmlMainMasterId


-(*void)sourceTextStyling;
-(id)allTargetLayoutTypes;
-(id)init;
-(id)slideLayoutForSlideHolder:(id)arg0 ;
-(id)slideLayoutForXmlLayoutId:(unsigned short)arg0 ;
-(id)slideMaster;
-(id)uniqueXmlSlideLayout;
-(unsigned int)mainPbRef;
-(unsigned int)titlePbRef;
-(void)cacheSlideLayouts;
-(void)cacheTargetLayoutType:(int)arg0 ;
-(void)dealloc;
-(void)setMainPbRef:(unsigned int)arg0 ;
-(void)setSlideLayout:(id)arg0 forXmlLayoutId:(unsigned short)arg1 ;
-(void)setSlideMaster:(id)arg0 ;
-(void)setTitlePbRef:(unsigned int)arg0 ;


@end


#endif