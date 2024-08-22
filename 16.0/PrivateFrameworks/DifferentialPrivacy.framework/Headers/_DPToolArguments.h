// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPTOOLARGUMENTS_H
#define _DPTOOLARGUMENTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _DPToolArguments : NSObject

@property (readonly, copy, nonatomic) NSString *arguments; // ivar: _arguments
@property (readonly, copy, nonatomic) NSString *command; // ivar: _command
@property (readonly, copy, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, copy, nonatomic) NSString *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *recordKey; // ivar: _recordKey
@property (readonly, nonatomic) BOOL verbose; // ivar: _verbose
@property (readonly, nonatomic) BOOL writeOK; // ivar: _writeOK


+(id)usage;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)job;


@end


#endif