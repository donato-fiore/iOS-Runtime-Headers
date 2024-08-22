// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRICLIENTFACTORPACKSTREAMINGWRITER_H
#define TRICLIENTFACTORPACKSTREAMINGWRITER_H

@class NSOutputStream, TRIPBCodedOutputStream, NSError;

#import <Foundation/Foundation.h>


@interface TRIClientFactorPackStreamingWriter : NSObject {
    NSOutputStream *_underlying;
    TRIPBCodedOutputStream *_stream;
    NSError *_firstError;
    BOOL _hasFactorPackId;
    BOOL _hasSelectedNamespace;
}




+(BOOL)copySourceFactorPack:(id)arg0 toDestPath:(id)arg1 error:(*id)arg2 modifyFactorLevel:(id)arg3 ;
-(BOOL)_streamExecWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(unsigned int)_fieldNumberForFieldName:(id)arg0 ;
-(void)appendFactorLevel:(id)arg0 ;
-(void)writeFactorPackId:(id)arg0 ;
-(void)writeSelectedNamespace:(id)arg0 ;


@end


#endif