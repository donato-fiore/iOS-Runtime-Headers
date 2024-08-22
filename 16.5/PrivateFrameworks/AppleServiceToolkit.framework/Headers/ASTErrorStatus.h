// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTERRORSTATUS_H
#define ASTERRORSTATUS_H

@class NSNumber, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ASTErrorStatus : NSObject

@property (retain, nonatomic) NSNumber *code; // ivar: _code
@property (retain, nonatomic) NSMutableDictionary *data; // ivar: _data
@property (retain, nonatomic) NSString *reason; // ivar: _reason


+(id)errorStatusWithCode:(NSInteger)arg0 ;
-(id)dictionary;
-(id)init;
-(id)reasonForCode:(id)arg0 ;


@end


#endif