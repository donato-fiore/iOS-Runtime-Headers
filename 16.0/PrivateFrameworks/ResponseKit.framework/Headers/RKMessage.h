// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RKMESSAGE_H
#define RKMESSAGE_H

@class NSDate, NSUUID, NSString;


#import "RKText.h"

@interface RKMessage : RKText

@property (readonly, copy) NSDate *dateSent; // ivar: _dateSent
@property (readonly) NSUInteger position; // ivar: _position
@property (readonly, copy) NSUUID *senderUUID; // ivar: _senderUUID
@property (readonly, copy) NSString *title; // ivar: _title


-(id)initWithString:(id)arg0 title:(id)arg1 languageIdentifier:(id)arg2 senderUUID:(id)arg3 dateSent:(id)arg4 position:(NSUInteger)arg5 ;
-(void)annotateRange:(struct _NSRange )arg0 type:(NSUInteger)arg1 field:(NSUInteger)arg2 ;


@end


#endif