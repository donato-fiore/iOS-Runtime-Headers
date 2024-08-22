// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEREWRITEGROUPNODEUIDINFO_H
#define TSCEREWRITEGROUPNODEUIDINFO_H


#import <Foundation/Foundation.h>


@interface TSCERewriteGroupNodeUIDInfo : NSObject {
    TSKUIDStruct _groupByUid;
    TSKUIDStructMap _groupNodeUIDMap;
}




-(*void)groupNodeUIDMap;
-(?)originalGroupNodeUIDs;
-(id)description;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithGroupByUid:(struct TSKUIDStruct *)arg0 groupNodeUIDMap:(*void)arg1 ;
-(struct TSKUIDStruct *)groupByUid;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif