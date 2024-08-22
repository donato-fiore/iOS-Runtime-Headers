// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCCONFIGURATIONBUNDLE_H
#define _GCCONFIGURATIONBUNDLE_H

@class NSBundle, NSString;
@protocol NSCopying;


#import "GCVersion.h"

@interface _GCConfigurationBundle : NSBundle <NSCopying>



@property (readonly) GCVersion *compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly) NSString *configurationType; // ivar: _configurationType
@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version; // ivar: _version


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 error:(*id)arg1 ;
-(id)redactedDescription;


@end


#endif