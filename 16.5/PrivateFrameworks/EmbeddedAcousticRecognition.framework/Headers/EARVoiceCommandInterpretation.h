// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EARVOICECOMMANDINTERPRETATION_H
#define EARVOICECOMMANDINTERPRETATION_H

@class NSArray, NSString, NSSet, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EARVoiceCommandInterpretation : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, copy, nonatomic) NSString *commandIdentifier; // ivar: _commandIdentifier
@property (readonly, nonatomic) _NSRange range;
@property (readonly, copy, nonatomic) NSSet *suiteIdentifiers; // ivar: _suiteIdentifiers
@property (readonly, copy, nonatomic) NSIndexSet *verbIndexes; // ivar: _verbIndexes


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCommandIdentifier:(id)arg0 suiteIdentifiers:(id)arg1 verbIndexes:(id)arg2 arguments:(id)arg3 ;


@end


#endif