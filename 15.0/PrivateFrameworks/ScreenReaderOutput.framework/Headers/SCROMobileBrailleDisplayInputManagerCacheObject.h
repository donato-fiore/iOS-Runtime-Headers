// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROMOBILEBRAILLEDISPLAYINPUTMANAGERCACHEOBJECT_H
#define SCROMOBILEBRAILLEDISPLAYINPUTMANAGERCACHEOBJECT_H

@class NSBundle, NSMutableDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject

@property (nonatomic) int brailleInputMode; // ivar: _brailleInputMode
@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) NSMutableDictionary *commandDictionary; // ivar: _commandDictionary
@property (retain, nonatomic) NSString *driverIdentifier; // ivar: _driverIdentifier
@property (retain, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (retain, nonatomic) NSMutableArray *orderedIdentifiers; // ivar: _orderedIdentifiers




@end


#endif