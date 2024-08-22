// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPTEMPORARYDATASTORAGEURL_H
#define TSPTEMPORARYDATASTORAGEURL_H

@class NSURL, TSUTemporaryDirectory;



@interface TSPTemporaryDataStorageURL : NSURL

@property (readonly, nonatomic) TSUTemporaryDirectory *parentDirectory; // ivar: _parentDirectory


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFileURLWithPath:(id)arg0 parentDirectory:(id)arg1 ;


@end


#endif