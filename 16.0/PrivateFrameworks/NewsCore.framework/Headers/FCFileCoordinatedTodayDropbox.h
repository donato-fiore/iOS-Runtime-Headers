// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFILECOORDINATEDTODAYDROPBOX_H
#define FCFILECOORDINATEDTODAYDROPBOX_H


#import <Foundation/Foundation.h>

#import "FCFileCoordinatedDictionary.h"

@interface FCFileCoordinatedTodayDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // ivar: _fileCoordinatedDictionary


-(id)init;
-(id)initWithFileURL:(id)arg0 ;
// -(void)depositWithAccessor:(id)arg0 completion:(unk)arg1  ;
-(void)peekWithAccessor:(id)arg0 ;


@end


#endif