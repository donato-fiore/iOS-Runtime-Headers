// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIOPENMEDIAHANDLER_H
#define SEARCHUIOPENMEDIAHANDLER_H

@class SFOpenMediaCommand;


#import "SearchUIMediaHandler.h"

@interface SearchUIOpenMediaHandler : SearchUIMediaHandler

@property (retain) SFOpenMediaCommand *command;


-(BOOL)supportsIntentPath;
-(id)actionProvider:(SEL)arg0 ;
-(id)clientSelectedBundleIdentifier;
-(id)intent;
-(id)mediaMetadata;


@end


#endif