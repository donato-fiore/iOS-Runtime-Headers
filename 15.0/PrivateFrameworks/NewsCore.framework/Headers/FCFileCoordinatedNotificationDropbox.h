// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFILECOORDINATEDNOTIFICATIONDROPBOX_H
#define FCFILECOORDINATEDNOTIFICATIONDROPBOX_H


#import <Foundation/Foundation.h>

#import "FCFileCoordinatedDictionary.h"

@interface FCFileCoordinatedNotificationDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // ivar: _fileCoordinatedDictionary


-(id)init;
-(id)initWithFileURL:(id)arg0 ;
// -(void)depositWithAccessor:(id)arg0 completion:(unk)arg1  ;
-(void)peekWithAccessor:(id)arg0 ;


@end


#endif