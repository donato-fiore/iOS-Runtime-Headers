// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXMETAPLUG_H
#define FXMETAPLUG_H

@protocol FxMetaPlug;

#import <Foundation/Foundation.h>


@interface FxMetaPlug : NSObject <FxMetaPlug>

 {
    *FxMetaPlugPriv _priv;
}




+(id)fxMetaPlugWithWrapper:(id)arg0 andData:(id)arg1 ;
+(id)syntheticUUIDBasedOnIndex:(int)arg0 ;
+(id)syntheticUUIDBasedOnString:(id)arg0 ;
-(id)data;
-(id)displayName;
-(id)fxPlugDescriptor;
-(id)fxPlugProperties;
-(id)groupDisplayName;
-(id)groupUUID;
-(id)initWithWrapper:(id)arg0 andData:(id)arg1 ;
-(id)uuid;
-(id)version;
-(id)versionDisplayName;
-(id)wrapper;
-(void)dealloc;


@end


#endif