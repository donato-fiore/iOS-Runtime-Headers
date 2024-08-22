// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONTENTKEYREQUESTPARAMS_H
#define AVCONTENTKEYREQUESTPARAMS_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVContentKeyRequestParams : NSObject

@property (copy) NSData *contentIdentifier; // ivar: _contentIdentifier
@property (copy) id *identifier; // ivar: _identifier
@property (copy) NSData *initializationData; // ivar: _initializationData
@property (copy) NSData *keyIDFromInitializationData; // ivar: _keyIDFromInitializationData
@property (copy) NSDictionary *options; // ivar: _options


-(id)initWithInitializationData:(id)arg0 contentIdentifier:(id)arg1 keyIDFromInitializationData:(id)arg2 options:(id)arg3 identifier:(id)arg4 ;
-(void)dealloc;


@end


#endif