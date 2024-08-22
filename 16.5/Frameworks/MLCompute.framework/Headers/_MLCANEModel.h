// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLCANEMODEL_H
#define _MLCANEMODEL_H

@class _ANEInMemoryModel, NSDictionary;

#import <Foundation/Foundation.h>


@interface _MLCANEModel : NSObject

@property (readonly, retain, nonatomic) _ANEInMemoryModel *anefModel; // ivar: _anefModel
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, copy, nonatomic) NSDictionary *plist; // ivar: _plist
@property (readonly, nonatomic) unsigned int qos; // ivar: _qos


+(id)objectWithModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 plist:(id)arg3 ;
-(id)initWithModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 plist:(id)arg3 ;
-(void)dealloc;


@end


#endif