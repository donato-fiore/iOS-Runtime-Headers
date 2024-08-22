// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSSTATERESOURCELIST_H
#define MPSSTATERESOURCELIST_H


#import <Foundation/Foundation.h>


@interface MPSStateResourceList : NSObject {
    *ResourceListNode _list;
}




+(id)resourceList;
+(id)resourceListWithBufferSizes:(NSUInteger)arg0 ;
+(id)resourceListWithTextureDescriptors:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(void)appendBuffer:(NSUInteger)arg0 ;
-(void)appendTexture:(id)arg0 ;
-(void)appendTexture:(id)arg0 format:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif