// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLCSSDOMAINEVENTDISPATCHER_H
#define RWIPROTOCOLCSSDOMAINEVENTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface RWIProtocolCSSDomainEventDispatcher : NSObject {
    *AugmentableInspectorController _controller;
}




-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;
-(void)mediaQueryResultChanged;
-(void)nodeLayoutContextTypeChangedWithNodeId:(int)arg0 layoutContextType:(*NSInteger)arg1 ;
-(void)styleSheetAddedWithHeader:(id)arg0 ;
-(void)styleSheetChangedWithStyleSheetId:(id)arg0 ;
-(void)styleSheetRemovedWithStyleSheetId:(id)arg0 ;


@end


#endif