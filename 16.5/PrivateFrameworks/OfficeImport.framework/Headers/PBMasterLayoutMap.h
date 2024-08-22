// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBMASTERLAYOUTMAP_H
#define PBMASTERLAYOUTMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PBMasterLayoutMap : NSObject {
    NSMutableDictionary *mMasterIdToMasterInfoMap;
    NSMutableDictionary *mTitleIdToMasterIdMap;
}




+(id)masterLayoutMap;
-(id)allMasterIds;
-(id)init;
-(id)masterInfoForMasterId:(int)arg0 ;
-(id)masterInfoForSlideHolder:(id)arg0 ;
-(id)slideLayoutForSlideHolder:(id)arg0 ;
-(int)masterIdForTitleId:(int)arg0 ;
-(void)setMasterId:(int)arg0 forTitleId:(int)arg1 ;
-(void)setMasterInfo:(id)arg0 forMasterId:(int)arg1 ;


@end


#endif