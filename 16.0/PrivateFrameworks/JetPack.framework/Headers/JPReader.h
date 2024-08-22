// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JPREADER_H
#define JPREADER_H


#import <Foundation/Foundation.h>


@interface JPReader : NSObject

@property (nonatomic) *JetPackReader backing; // ivar: _backing
@property (copy, nonatomic) id *dataSegmentFound; // ivar: _dataSegmentFound
@property (copy, nonatomic) id *fileEntryFound; // ivar: _fileEntryFound
@property (copy, nonatomic) id *keyForIdentifier; // ivar: _keyForIdentifier


-(BOOL)processStream:(id)arg0 signatureVerifier:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)convertError;
-(id)init;
-(void)dealloc;


@end


#endif