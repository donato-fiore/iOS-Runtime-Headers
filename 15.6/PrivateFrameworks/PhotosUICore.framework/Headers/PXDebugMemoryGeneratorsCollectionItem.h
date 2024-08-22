// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDEBUGMEMORYGENERATORSCOLLECTIONITEM_H
#define PXDEBUGMEMORYGENERATORSCOLLECTIONITEM_H

@class NSString, PHMemory, NSDictionary;

#import <Foundation/Foundation.h>


@interface PXDebugMemoryGeneratorsCollectionItem : NSObject

@property (readonly) NSString *description; // ivar: _description
@property (readonly) PHMemory *memory; // ivar: _memory
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSDictionary *options; // ivar: _options
@property (readonly) NSString *rejectionCause; // ivar: _rejectionCause


-(id)initWithMemory:(id)arg0 memoryInfo:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;


@end


#endif