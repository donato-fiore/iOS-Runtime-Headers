// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCUSTOMFORMATLIST_H
#define TSTCUSTOMFORMATLIST_H

@class NSMutableDictionary;


#import "TSTTableDataList.h"

@interface TSTCustomFormatList : TSTTableDataList {
    NSMutableDictionary *mNamesList;
}




-(*void)customFormatForKey:(unsigned int)arg0 ;
-(BOOL)supportsIDMapForType:(int)arg0 ;
-(NSInteger)count;
-(id)allNumberKeys;
-(id)customFormatWrapperForKey:(unsigned int)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)newUniqueNameFromName:(id)arg0 ;
-(id)newUniqueNameFromName:(id)arg0 preserveSeed:(BOOL)arg1 ;
-(unsigned int)addCustomFormat:(*void)arg0 duringImport:(BOOL)arg1 ;
-(unsigned int)addCustomFormat:(*void)arg0 withOldKey:(unsigned int)arg1 ;
-(unsigned int)maxKey;
-(void)dealloc;
-(void)p_setupNamesList;


@end


#endif