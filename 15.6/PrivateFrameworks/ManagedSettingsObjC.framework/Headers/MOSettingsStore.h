// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOSETTINGSSTORE_H
#define MOSETTINGSSTORE_H

@protocol MOSettingsReader, MOSettingsWriter;

#import <Foundation/Foundation.h>


@interface MOSettingsStore : NSObject

@property (readonly, weak) NSObject<MOSettingsReader> *reader;
@property (readonly, weak) NSObject<MOSettingsWriter> *writer;


+(BOOL)saveSettings:(id)arg0 toURL:(id)arg1 ;
+(id)loadSettingsAtURL:(id)arg0 ;
+(id)xpcConnection;
-(id)init;


@end


#endif