// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATALIST_H
#define TSTTABLEDATALIST_H



#import "TSPObject.h"
#import "TSTIntegerKeyDict.h"
#import "TSTTableDataObjectKeyDict.h"

@interface TSTTableDataList : TSPObject {
    int mListType;
    TSTIntegerKeyDict *mData;
    TSTTableDataObjectKeyDict *mIDs;
}


@property (readonly, nonatomic) TSTIntegerKeyDict *data;
@property (readonly, nonatomic) unsigned int nextID; // ivar: mNextID


-(BOOL)supportsIDMapForType:(int)arg0 ;
-(NSUInteger)flushableSize;
-(id)allRichTextPayloadStorages;
-(id)initWithType:(int)arg0 context:(id)arg1 ;
-(id)packageLocator;
-(void)dealloc;
-(void)p_setupWithType:(int)arg0 nextKeyID:(unsigned int)arg1 ;


@end


#endif