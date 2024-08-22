// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMUSICGENRENODE_H
#define PGGRAPHMUSICGENRENODE_H

@class NSString;
@protocol PGGraphGenre;


#import "PGGraphPropertylessNode.h"

@interface PGGraphMusicGenreNode : PGGraphPropertylessNode <PGGraphGenre>

 {
    NSString *_label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;


-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(unsigned short)domain;


@end


#endif