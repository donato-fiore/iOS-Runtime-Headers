// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMENTIONPARTICIPANT_H
#define PKMENTIONPARTICIPANT_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface PKMentionParticipant : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(id)mentionWithDisplayName:(id)arg0 identifier:(id)arg1 color:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithDisplayName:(id)arg0 identifier:(id)arg1 color:(id)arg2 ;


@end


#endif