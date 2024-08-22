// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EARVOICECOMMANDARGUMENT_H
#define EARVOICECOMMANDARGUMENT_H

@class NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EARVoiceCommandArgument : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSIndexSet *adpositionIndexes; // ivar: _adpositionIndexes
@property (readonly, copy, nonatomic) NSIndexSet *indexes; // ivar: _indexes
@property (readonly, nonatomic) char presence; // ivar: _presence


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPresence:(char)arg0 indexes:(id)arg1 adpositionIndexes:(id)arg2 ;


@end


#endif