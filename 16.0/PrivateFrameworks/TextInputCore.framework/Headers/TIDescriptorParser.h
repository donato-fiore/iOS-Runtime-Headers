// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIDESCRIPTORPARSER_H
#define TIDESCRIPTORPARSER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TIDescriptorParser : NSObject

@property (readonly, nonatomic) NSMutableDictionary *context; // ivar: _context
@property (readonly, nonatomic) NSInteger errorCode; // ivar: _errorCode


-(id)boxNilForValue:(id)arg0 ;
-(id)errorWithDetails:(id)arg0 ;
-(id)errorWithMessage:(id)arg0 ;
-(id)errorWithMessage:(id)arg0 andValue:(id)arg1 ;
-(id)initWithErrorCode:(NSInteger)arg0 ;
-(id)invalidDataTypeErrorForKey:(id)arg0 withValue:(id)arg1 dataType:(id)arg2 ;
-(id)invalidValueErrorForKey:(id)arg0 withValue:(id)arg1 ;
-(id)missingValueErrorForKey:(id)arg0 ;
-(id)parseArrayForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseBooleanForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseDictionaryForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseFloatForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseIntegerForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseNumberForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseObjectForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 validate:(id)arg4 ;
-(id)parseStringForKey:(id)arg0 fromConfig:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;


@end


#endif