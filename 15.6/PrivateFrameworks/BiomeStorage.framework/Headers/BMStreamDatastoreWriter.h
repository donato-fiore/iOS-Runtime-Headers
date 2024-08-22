// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTREAMDATASTOREWRITER_H
#define BMSTREAMDATASTOREWRITER_H


#import <Foundation/Foundation.h>

#import "BMStreamDatastore.h"

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore *_inner;
}


@property (readonly, nonatomic) BOOL canReadOrPruneData;


-(BOOL)_writeEventData:(id)arg0 dataVersion:(unsigned int)arg1 timestamp:(CGFloat)arg2 outBookmark:(*id)arg3 ;
-(BOOL)writeEventBodyClass:(Class)arg0 ;
-(BOOL)writeEventWithEventBody:(id)arg0 ;
-(BOOL)writeEventWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 ;
-(Class)eventBodyClass;
-(id)initWithStream:(id)arg0 config:(id)arg1 ;
-(id)streamIdentifier;
-(void)syncMappedFiles;


@end


#endif