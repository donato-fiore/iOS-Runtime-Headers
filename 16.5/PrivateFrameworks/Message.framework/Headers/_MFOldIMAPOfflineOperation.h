// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFOLDIMAPOFFLINEOPERATION_H
#define _MFOLDIMAPOFFLINEOPERATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _MFOldIMAPOfflineOperation : NSObject

@property (retain, nonatomic) NSString *mailboxName; // ivar: _mailboxName
@property (nonatomic) int operationType; // ivar: _operationType


+(id)_createStringFromData:(id)arg0 cursor:(*NSUInteger)arg1 ;
+(id)deserializedCopyFromData:(id)arg0 cursor:(*NSUInteger)arg1 ;


@end


#endif