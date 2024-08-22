// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXTERNALDISPLAYARRANGEMENTITEM_H
#define SBEXTERNALDISPLAYARRANGEMENTITEM_H

@class FBSDisplayIdentity;

#import <Foundation/Foundation.h>


@interface SBExternalDisplayArrangementItem : NSObject

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (readonly, nonatomic) unsigned int edge; // ivar: _edge
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, nonatomic) FBSDisplayIdentity *relativeDisplayIdentity; // ivar: _relativeDisplayIdentity


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDisplayIdentity:(id)arg0 relativeDisplayIdentity:(id)arg1 edge:(unsigned int)arg2 offset:(CGFloat)arg3 ;


@end


#endif