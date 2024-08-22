// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTEXTSTOREWRITER_H
#define ATXCONTEXTSTOREWRITER_H

@class _CDClientContext, _CDContextualKeyPath, NSString;
@protocol ATXContextStoreWriterProtocol;

#import <Foundation/Foundation.h>


@interface ATXContextStoreWriter : NSObject <ATXContextStoreWriterProtocol>

 {
    _CDClientContext *_context;
    _CDContextualKeyPath *_keyPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setWithObject:(id)arg0 ;
-(id)initWithContext:(id)arg0 keyPath:(id)arg1 ;


@end


#endif