// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXMETAPLUGWRAPPER_H
#define FXMETAPLUGWRAPPER_H

@protocol FxMetaPlugWrapper;

#import <Foundation/Foundation.h>


@interface FxMetaPlugWrapper : NSObject <FxMetaPlugWrapper>





-(Class)plugInClass;
-(id)defaultFolderURLs;
-(id)fxMetaPlugsInFolderURLs:(id)arg0 includingBuiltIns:(BOOL)arg1 ;
-(id)plugInTypeUUID;


@end


#endif