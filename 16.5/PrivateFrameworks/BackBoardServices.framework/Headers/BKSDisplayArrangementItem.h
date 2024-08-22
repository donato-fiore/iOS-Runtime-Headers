// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSDISPLAYARRANGEMENTITEM_H
#define BKSDISPLAYARRANGEMENTITEM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSDisplayArrangementItem : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayUUID; // ivar: _displayUUID
@property (readonly, nonatomic) unsigned int edge; // ivar: _edge
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, copy, nonatomic) NSString *relativeDisplayUUID; // ivar: _relativeDisplayUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayUUID:(id)arg0 relativeToDisplayUUID:(id)arg1 alongEdge:(unsigned int)arg2 atOffset:(CGFloat)arg3 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif