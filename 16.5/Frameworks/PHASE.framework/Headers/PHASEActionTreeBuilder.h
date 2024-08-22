// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEACTIONTREEBUILDER_H
#define PHASEACTIONTREEBUILDER_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PHASEActionTreeBuilder : NSObject {
    NSMutableArray *_rootNodes;
    NSMutableSet *_parameters;
    NSMutableSet *_mixNodes;
    unsigned int _nextNodeId;
}




+(id)getParamArray:(id)arg0 globalParamUIDs:(id)arg1 outError:(*id)arg2 ;
-(BOOL)addParameter:(id)arg0 ;
-(BOOL)addRootNode:(id)arg0 ;
-(BOOL)processNode:(id)arg0 withArray:(id)arg1 outError:(*id)arg2 ;
-(id)createParseableDictionaryWithUID:(id)arg0 rootNodes:(id)arg1 globalParamUIDs:(id)arg2 assetRegistry:(id)arg3 outError:(*id)arg4 ;
-(id)generateNodeDictionary:(id)arg0 outError:(*id)arg1 ;
-(id)init;
-(void)fillGeneratorNodeEntries:(id)arg0 dictionary:(id)arg1 ;
-(void)fillOutDirectivityFieldsWithParams:(id)arg0 dictionary:(id)arg1 isListener:(BOOL)arg2 ;
-(void)fillOutDistanceFieldsWithParams:(id)arg0 dictionary:(id)arg1 ;


@end


#endif