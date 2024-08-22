// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIINSTRUMENTATIONOBJECTCONTAINER_H
#define SIRIINSTRUMENTATIONOBJECTCONTAINER_H

@class SISchemaInstrumentationMessage, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SiriInstrumentationObjectContainer : NSObject

@property (retain) SISchemaInstrumentationMessage *mainItem; // ivar: _mainItem
@property (retain) NSMutableArray *tier1Events; // ivar: _tier1Events


-(void)addTier1Event:(id)arg0 ;


@end


#endif