// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRUIFDEBUGLOG_H
#define SRUIFDEBUGLOG_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface SRUIFDebugLog : NSObject

@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)logWithData:(id)arg0 mimeType:(id)arg1 name:(id)arg2 attemptCompression:(BOOL)arg3 ;
-(id)initWithData:(id)arg0 mimeType:(id)arg1 name:(id)arg2 attemptCompression:(BOOL)arg3 ;


@end


#endif