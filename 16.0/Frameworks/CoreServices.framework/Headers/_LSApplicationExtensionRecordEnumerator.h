// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSAPPLICATIONEXTENSIONRECORDENUMERATOR_H
#define _LSAPPLICATIONEXTENSIONRECORDENUMERATOR_H

@class LSRecordEnumerator, NSString;


#import "LSExtensionPointRecord.h"
#import "LSPropertyList.h"

@interface _LSApplicationExtensionRecordEnumerator : LSRecordEnumerator {
    NSString *_extensionPointID;
    unsigned int _platform;
    LSExtensionPointRecord *_extensionPointRecord;
    NSUInteger _options;
    id *_filterBlock;
    LSPropertyList *_propertyList;
    vector<unsigned int, std::allocator<unsigned int>> _plugins;
}




-(BOOL)_evaluatePluginNoIO:(unsigned int)arg0 data:(struct LSPluginData *)arg1 extensionPointID:(unsigned int)arg2 context:(struct LSContext *)arg3 ;
-(BOOL)_getExtensionPointID:(*unsigned int)arg0 context:(struct LSContext *)arg1 error:(*id)arg2 ;
-(BOOL)_getObject:(*id)arg0 atIndex:(NSUInteger)arg1 context:(struct LSContext *)arg2 ;
-(BOOL)_prepareWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithExtensionPoint:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 options:(NSUInteger)arg1 filter:(id)arg2 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 options:(NSUInteger)arg1 platform:(unsigned int)arg2 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 options:(NSUInteger)arg1 platform:(unsigned int)arg2 filter:(id)arg3 ;


@end


#endif