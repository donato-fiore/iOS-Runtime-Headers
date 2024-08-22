// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLETILEROWINFO_H
#define TSTTABLETILEROWINFO_H



#import "TSPContainedObject.h"

@interface TSTTableTileRowInfo : TSPContainedObject {
    *__CFData mStorageBuffer;
    unsigned short mStorageOffsets;
    unsigned short mBufferSize;
    unsigned char mMaxTileColumnIndex;
    BOOL mMaxTileColumnIndexValid;
    unsigned char mStorageVersion;
}


@property (readonly, nonatomic) unsigned short cellCount; // ivar: mCellCount
@property (nonatomic) unsigned short tileRowIndex; // ivar: mTileRowIndex


-(id)description;
-(id)initWithOwner:(id)arg0 tileRowIndex:(unsigned short)arg1 ;
-(id)p_debugDumpCompact;
-(void)dealloc;
-(void)debugDump;
-(void)i_upgradeWithDataStore:(id)arg0 ;
-(void)validate;


@end


#endif