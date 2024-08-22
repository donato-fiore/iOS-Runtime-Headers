// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPP2VECMAPPING_H
#define ATXAPP2VECMAPPING_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ATXApp2VecMapping : NSObject {
    NSData *_data;
    header_s _hdr;
    *unsigned short _matrix;
    *unsigned short _endOfMatrix;
    *_CFBurstTrie _idxForBundleId;
}


@property (readonly, nonatomic) NSUInteger appCount;
@property (readonly, nonatomic) NSUInteger vectorLength;


-(BOOL)getVectorForBundleId:(id)arg0 into:(*float)arg1 ;
-(BOOL)getVectorForBundleIdWithGenreBackup:(id)arg0 into:(*float)arg1 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;


@end


#endif