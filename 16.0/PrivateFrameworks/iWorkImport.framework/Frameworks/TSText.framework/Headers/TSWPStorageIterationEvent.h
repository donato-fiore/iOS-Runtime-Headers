// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSTORAGEITERATIONEVENT_H
#define TSWPSTORAGEITERATIONEVENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPStorageIterationEvent : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject *object; // ivar: _object
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly, nonatomic) int type; // ivar: _type


+(id)characterEventWithRange:(struct _NSRange )arg0 ;
+(id)eventWithType:(int)arg0 providerIdentifier:(id)arg1 range:(struct _NSRange )arg2 object:(id)arg3 ;
-(BOOL)isRangeEnd;
-(id)description;
-(id)initWithCharacterRange:(struct _NSRange )arg0 ;
-(id)initWithType:(int)arg0 providerIdentifier:(id)arg1 range:(struct _NSRange )arg2 object:(id)arg3 ;


@end


#endif