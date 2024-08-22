// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNODEINPUTMEDIAPROPERTIES_H
#define BWNODEINPUTMEDIAPROPERTIES_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BWNodeInput.h"
#import "BWFormat.h"
#import "BWVideoFormat.h"

@interface BWNodeInputMediaProperties : NSObject {
    NSString *_associatedAttachedMediaKey;
    BWNodeInput *_owningNodeInput;
    BWFormat *_resolvedFormat;
}


@property (readonly, nonatomic) BWFormat *liveFormat; // ivar: _liveFormat
@property (readonly, nonatomic) BWVideoFormat *liveVideoFormat;
@property (retain, nonatomic) BWFormat *resolvedFormat;
@property (readonly, nonatomic) BWVideoFormat *resolvedVideoFormat;


-(void)_setOwningNodeInput:(id)arg0 associatedAttachedMediaKey:(id)arg1 ;
-(void)dealloc;


@end


#endif