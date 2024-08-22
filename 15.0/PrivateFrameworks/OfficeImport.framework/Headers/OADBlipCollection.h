// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADBLIPCOLLECTION_H
#define OADBLIPCOLLECTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OADBlipCollection : NSObject

@property (retain, nonatomic) NSMutableArray *blips; // ivar: mBlips


-(id)blipAtIndex:(int)arg0 ;
-(id)init;
-(unsigned int)addBlip:(id)arg0 ;
-(unsigned int)blipCount;


@end


#endif