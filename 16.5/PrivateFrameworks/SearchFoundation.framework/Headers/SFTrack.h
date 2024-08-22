// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTRACK_H
#define SFTRACK_H

@class NSString, NSDictionary, NSData, NSURL;
@protocol SFTrack, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFActionItem.h"

@interface SFTrack : NSObject <SFTrack, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *number; // ivar: _number
@property (retain, nonatomic) SFActionItem *playAction; // ivar: _playAction
@property (copy, nonatomic) NSURL *preview; // ivar: _preview
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)hasHighlighted;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif