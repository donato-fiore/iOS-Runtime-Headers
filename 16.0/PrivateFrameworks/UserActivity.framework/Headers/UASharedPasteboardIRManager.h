// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UASHAREDPASTEBOARDIRMANAGER_H
#define UASHAREDPASTEBOARDIRMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface UASharedPasteboardIRManager : NSObject

@property (retain) NSMutableDictionary *lookupTable; // ivar: _lookupTable


+(id)sharedIRManager;
-(id)converterForType:(id)arg0 ;
-(id)init;
-(id)registeredConverters;
-(void)initializeConverters;
-(void)registerIRHandlerClass:(Class)arg0 forType:(id)arg1 ;


@end


#endif