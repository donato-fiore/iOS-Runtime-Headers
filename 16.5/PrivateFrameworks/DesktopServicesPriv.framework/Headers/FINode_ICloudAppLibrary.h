// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FINODE_ICLOUDAPPLIBRARY_H
#define FINODE_ICLOUDAPPLIBRARY_H



#import "FIDSNode.h"
#import "FINode.h"

@interface FINode_ICloudAppLibrary : FIDSNode

@property (retain, nonatomic) FINode *documentsFolder; // ivar: _documentsFolder


-(id)fetchLastUsedDate:(BOOL)arg0 ;
-(id)iteratorIncludingInvisibleItems:(BOOL)arg0 synchronous:(BOOL)arg1 ;
-(id)nodesToObserve;
-(id)propertyAsDate:(unsigned int)arg0 ;
-(void)dispatchEvent:(id)arg0 forObserver:(id)arg1 ;


@end


#endif