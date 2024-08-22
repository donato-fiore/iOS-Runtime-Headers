// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTOKENTREE_H
#define EDTOKENTREE_H


#import <Foundation/Foundation.h>


@interface EDTokenTree : NSObject



+(BOOL)isTokenAttrASum:(unsigned short)arg0 ;
+(BOOL)isTokenNoOp:(unsigned int)arg0 formula:(id)arg1 ;
+(id)buildSubtree:(unsigned int)arg0 formula:(id)arg1 ;
+(id)buildSubtreeAtIndex:(*unsigned int)arg0 formula:(id)arg1 ;
+(unsigned int)childCountForToken:(unsigned int)arg0 formula:(id)arg1 ;


@end


#endif