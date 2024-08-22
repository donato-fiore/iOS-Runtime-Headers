// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYARRANGEMENTITEM_H
#define SBDISPLAYARRANGEMENTITEM_H

@class NSString, FBSDisplayIdentity;
@protocol BSDescriptionStreamable;

#import <Foundation/Foundation.h>


@interface SBDisplayArrangementItem : NSObject <BSDescriptionStreamable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (readonly, nonatomic) unsigned int edge; // ivar: _edge
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, nonatomic) FBSDisplayIdentity *relativeDisplayIdentity; // ivar: _relativeDisplayIdentity
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDisplayIdentity:(id)arg0 relativeDisplayIdentity:(id)arg1 edge:(unsigned int)arg2 offset:(CGFloat)arg3 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif