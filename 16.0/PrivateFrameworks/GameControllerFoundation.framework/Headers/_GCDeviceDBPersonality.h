// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEDBPERSONALITY_H
#define _GCDEVICEDBPERSONALITY_H

@class NSURL, NSPredicate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GCVersion.h"
#import "GCGenericDeviceModel.h"

@interface _GCDeviceDBPersonality : NSObject <NSCopying>

 {
    NSURL *_url;
}


@property (readonly, copy) GCVersion *compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, copy) NSPredicate *ioMatchingPredicate; // ivar: _ioMatchingPredicate
@property (readonly, copy) GCGenericDeviceModel *model; // ivar: _model


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;


@end


#endif