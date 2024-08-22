// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFILECOORDINATEDTODAYPERSONALIZATIONUPDATE_H
#define FCFILECOORDINATEDTODAYPERSONALIZATIONUPDATE_H


#import <Foundation/Foundation.h>

#import "FCFileCoordinatedDictionary.h"

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // ivar: _fileCoordinatedDictionary


-(id)init;
-(id)initWithFileURL:(id)arg0 ;
-(void)clearUpdates;
-(void)readWithAccessor:(id)arg0 ;
-(void)submitUpdate:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif