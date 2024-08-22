// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMLIBRARYNODE_H
#define _BMLIBRARYNODE_H


#import <Foundation/Foundation.h>


@interface _BMLibraryNode : NSObject



+(id)allStreamIdentifiers;
+(id)allStreams;
+(id)allValidKeyPaths;
+(id)identifier;
+(id)streamNames;
+(id)streamWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)streamWithName:(id)arg0 ;
+(id)streams;
+(id)sublibraries;
+(id)validKeyPaths;


@end


#endif