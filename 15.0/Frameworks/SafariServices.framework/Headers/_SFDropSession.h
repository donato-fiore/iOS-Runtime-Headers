// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFDROPSESSION_H
#define _SFDROPSESSION_H


#import <Foundation/Foundation.h>


@interface _SFDropSession : NSObject



+(BOOL)dropSession:(id)arg0 containsItemsMatching:(*unk)arg1 allowedTypeIdentifiers:(id)arg2 allowedClasses:(id)arg3 ;
+(void)dropSession:(id)arg0 loadObjectsUsingLocalObjectLoader:(*unk)arg1 objectLoader:(*unk)arg2 completionHandler:(id)arg3 ;


@end


#endif