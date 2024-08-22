// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWHIGHLIGHTEVENT_H
#define _SWHIGHLIGHTEVENT_H

@class NSString, NSURL;
@protocol SWHighlightEventProtocol;

#import <Foundation/Foundation.h>


@interface _SWHighlightEvent : NSObject <SWHighlightEventProtocol>



@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *highlightURL; // ivar: _highlightURL
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 action:(NSInteger)arg1 ;
-(id)initWithHighlightURL:(id)arg0 action:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif