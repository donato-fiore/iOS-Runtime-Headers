// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPANE_H
#define EXPANE_H


#import <Foundation/Foundation.h>


@interface EXPane : NSObject



+(id)activePaneTypeEnumMap;
+(id)edPaneFromXMLPaneElement:(struct _xmlNode *)arg0 ;
+(id)paneStateEnumMap;
+(int)edActivePaneEnumFromString:(id)arg0 ;


@end


#endif