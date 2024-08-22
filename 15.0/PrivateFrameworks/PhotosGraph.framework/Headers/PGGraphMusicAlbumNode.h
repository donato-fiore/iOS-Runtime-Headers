// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHMUSICALBUMNODE_H
#define PGGRAPHMUSICALBUMNODE_H

@class NSString;


#import "PGGraphOptimizedNode.h"

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithTitle:(id)arg0 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif