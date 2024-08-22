// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECITEMCURRENTITEMDATA_H
#define SECITEMCURRENTITEMDATA_H

@class NSDate, NSData;

#import <Foundation/Foundation.h>


@interface SecItemCurrentItemData : NSObject

@property (retain) NSDate *currentItemPointerModificationTime; // ivar: _currentItemPointerModificationTime
@property (retain) NSData *persistentRef; // ivar: _persistentRef


-(id)initWithPersistentRef:(id)arg0 ;


@end


#endif