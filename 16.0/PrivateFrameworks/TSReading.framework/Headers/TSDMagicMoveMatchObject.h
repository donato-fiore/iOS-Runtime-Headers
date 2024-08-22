// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMAGICMOVEMATCHOBJECT_H
#define TSDMAGICMOVEMATCHOBJECT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "TSDRep.h"

@interface TSDMagicMoveMatchObject : NSObject

@property (retain, nonatomic) NSMutableDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGPoint position; // ivar: _position
@property (retain, nonatomic) TSDRep *rep; // ivar: _rep
@property (nonatomic) _NSRange stringRange; // ivar: _stringRange
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) NSInteger zOrder; // ivar: _zOrder


+(id)matchObjectWithRep:(id)arg0 position:(struct CGPoint )arg1 ;
+(id)matchObjectWithTextRep:(id)arg0 position:(struct CGPoint )arg1 stringValue:(id)arg2 stringRange:(struct _NSRange )arg3 ;
-(BOOL)conflictsWithMatchObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRep:(id)arg0 position:(struct CGPoint )arg1 stringValue:(id)arg2 stringRange:(struct _NSRange )arg3 ;
-(void)dealloc;


@end


#endif