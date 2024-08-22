// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATERESTORATIONKEYEDARCHIVERDELEGATE_H
#define _UISTATERESTORATIONKEYEDARCHIVERDELEGATE_H

@class NSString;
@protocol NSKeyedArchiverDelegate;

#import <Foundation/Foundation.h>


@interface _UIStateRestorationKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDelegate;
-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;


@end


#endif