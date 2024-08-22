// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRGLOBALCONTEXTOBJC_H
#define CRGLOBALCONTEXTOBJC_H


#import <Foundation/Foundation.h>


@interface CRGlobalContextObjC : NSObject



+(NSInteger)renameGeneration;
+(id)newObjCReplicaFor:(id)arg0 ;
+(id)objCRenames;
+(id)renameObjCSequence:(id)arg0 after:(NSInteger)arg1 in:(id)arg2 ;
+(void)releaseObjCSequence:(id)arg0 ;
+(void)retainObjCSequence:(id)arg0 ;
+(void)retainOrReleaseWithInitial:(id)arg0 current:(id)arg1 forReplica:(id)arg2 ;
+(void)retainOrReleaseWithInitial:(id)arg0 current:(id)arg1 forReplica:(id)arg2 copyingFrom:(id)arg3 ;
-(id)init;


@end


#endif