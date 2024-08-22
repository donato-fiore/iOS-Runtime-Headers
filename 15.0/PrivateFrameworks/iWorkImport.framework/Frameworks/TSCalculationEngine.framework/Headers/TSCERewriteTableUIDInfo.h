// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEREWRITETABLEUIDINFO_H
#define TSCEREWRITETABLEUIDINFO_H


#import <Foundation/Foundation.h>


@interface TSCERewriteTableUIDInfo : NSObject {
    TSKUIDStructMap _tableUIDMap;
}




-(*void)tableUIDMap;
-(?)originalTableUIDs;
-(id)description;
-(id)extendMappingWithTableUIDs:(*void)arg0 calcEngine:(id)arg1 ;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithTableUIDMap:(*void)arg0 ;
-(void)rollbackMappings:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 ;
-(void)tableWasAdded:(struct TSKUIDStruct *)arg0 ;


@end


#endif