// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DMATERIALPACKAGE_H
#define TSCH3DMATERIALPACKAGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DMaterialPackage : NSObject <NSCopying>





+(id)package;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)didInitFromSOS;


@end


#endif