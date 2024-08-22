// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDATAHOLDER_H
#define MFDATAHOLDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFDataHolder : NSObject {
    NSMutableArray *_datas;
}


@property (readonly, nonatomic) NSUInteger length; // ivar: _length


+(id)dataHolder;
+(id)dataHolderWithData:(id)arg0 ;
-(NSUInteger)numberOfNewlinesNeedingConversion:(BOOL)arg0 ;
-(id)data;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)addData:(id)arg0 ;
-(void)enumerateByteRangesUsingBlock:(id)arg0 ;
-(void)enumerateConvertingNewlinesUsingBlock:(id)arg0 ;
-(void)enumerateDatasUsingBlock:(id)arg0 ;


@end


#endif