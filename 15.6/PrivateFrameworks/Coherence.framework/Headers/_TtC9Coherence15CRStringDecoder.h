// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COHERENCE15CRSTRINGDECODER_H
#define _TTC9COHERENCE15CRSTRINGDECODER_H

@protocol CRStringDecoderProtocol;

#import <Foundation/Foundation.h>


@interface _TtC9Coherence15CRStringDecoder : NSObject <CRStringDecoderProtocol>

 {
    ? encoded;
    ? subsequence;
    ? decoder;
}




-(NSInteger)substringAddedByCount;
-(NSInteger)substringChildCount;
-(NSInteger)substringCount;
-(id)addedByVersionWithError:(*id)arg0 ;
-(id)context;
-(id)init;
-(id)storageWithError:(*id)arg0 ;
-(id)substringAddedByReplica:(NSInteger)arg0 withError:(*id)arg1 ;
-(id)substringCharReplicaWithError:(*id)arg0 ;
-(id)versionWithError:(*id)arg0 ;
-(unsigned int)substringAddedByCounter:(NSInteger)arg0 ;
-(unsigned int)substringCharClock;
-(unsigned int)substringChild:(NSInteger)arg0 ;
-(unsigned int)substringLength;
-(void)decodeSubstring:(NSInteger)arg0 ;


@end


#endif