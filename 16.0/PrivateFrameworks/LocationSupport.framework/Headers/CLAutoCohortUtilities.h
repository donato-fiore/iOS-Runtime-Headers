// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLAUTOCOHORTUTILITIES_H
#define CLAUTOCOHORTUTILITIES_H


#import <Foundation/Foundation.h>


@interface CLAutoCohortUtilities : NSObject



+(BOOL)autoCohortingEnabled;
+(BOOL)isEdgeKnownToCauseCycle:(id)arg0 ;
+(id)computeAutoCohortMapWithStarterGraph:(id)arg0 ;
+(id)getEdgeFilesFromDirectory:(id)arg0 ;
+(id)getSafeEdges;
+(id)getUnsafeEdges;
+(id)getUnvettedEdges;
+(id)layerAssignmentForNode:(id)arg0 inGraph:(id)arg1 extendingLayering:(id)arg2 ;
+(id)readEdges:(id)arg0 ;
+(void)applyEdges:(id)arg0 toGraph:(id)arg1 ;
+(void)createDirectoryAtPath:(id)arg0 ;
+(void)enableAutoCohortingForProcessAtPath:(id)arg0 ;
+(void)markUnvetted:(id)arg0 ;
+(void)markUnvettedSafe;
+(void)markUnvettedUnsafe;
+(void)persistEdgeFrom:(id)arg0 to:(id)arg1 ;
+(void)writeEdge:(id)arg0 toDirectory:(id)arg1 ;


@end


#endif