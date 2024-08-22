// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSPARSER_H
#define ICSPARSER_H

@class NSData;
@protocol ICSUIDGenerator;

#import <Foundation/Foundation.h>

#import "ICSTokenizer.h"

@interface ICSParser : NSObject {
    NSUInteger _options;
    NSData *_data;
    id<ICSUIDGenerator> *_uidGenerator;
}


@property (readonly, nonatomic) ICSTokenizer *lexer; // ivar: _lexer


+(id)entitiesFromNSData:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)createPropertyType:(int)arg0 component:(id)arg1 withName:(id)arg2 ;
-(BOOL)parseProperty:(id)arg0 ;
-(id)initWithData:(id)arg0 options:(NSUInteger)arg1 ;
-(id)makeComponent:(char *)arg0 ;
-(id)parseData;
-(void)_parseComponent:(id)arg0 ;
-(void)_parseComponent:(id)arg0 depth:(NSUInteger)arg1 fatalError:(*BOOL)arg2 ;
-(void)parseParameter:(id)arg0 ;


@end


#endif