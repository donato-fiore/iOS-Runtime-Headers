// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWHIGHLIGHTPERSISTENCEEVENT_H
#define SWHIGHLIGHTPERSISTENCEEVENT_H

@class NSString, NSURL;
@protocol SWHighlightEvent;

#import <Foundation/Foundation.h>


@interface SWHighlightPersistenceEvent : NSObject <SWHighlightEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *highlightURL; // ivar: _highlightURL
@property (readonly, nonatomic) NSInteger persistenceEventTrigger;
@property (readonly, nonatomic) NSInteger persistenceEventType; // ivar: _persistenceEventType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 trigger:(NSInteger)arg1 ;
-(id)initWithHighlight:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithHighlightURL:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif