// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MMCSREQUESTORCONTEXT_H
#define MMCSREQUESTORCONTEXT_H


#import <Foundation/Foundation.h>

#import "MMCSEngine.h"

@interface MMCSRequestorContext : NSObject

@property (nonatomic) *char * authTokens; // ivar: _authTokens
@property (nonatomic) NSUInteger count; // ivar: _count
@property (weak, nonatomic) MMCSEngine *engine; // ivar: _engine
@property (nonatomic) *unsigned int itemFlags; // ivar: _itemFlags
@property (nonatomic) *NSUInteger itemIDs; // ivar: _itemIDs
@property (nonatomic) *char * signatures; // ivar: _signatures
@property (nonatomic) int type; // ivar: _type


+(id)contextWithEngine:(id)arg0 type:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithEngine:(id)arg0 type:(int)arg1 ;
-(void)dealloc;


@end


#endif