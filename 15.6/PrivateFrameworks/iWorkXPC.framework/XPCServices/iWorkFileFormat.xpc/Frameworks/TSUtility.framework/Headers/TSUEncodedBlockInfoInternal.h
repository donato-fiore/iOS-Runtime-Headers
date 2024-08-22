// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUENCODEDBLOCKINFOINTERNAL_H
#define TSUENCODEDBLOCKINFOINTERNAL_H

@class NSString;
@protocol TSUEncodedBlockInfo;

#import <Foundation/Foundation.h>


@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger decodedLength;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger encodedLength; // ivar: _encodedLength
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithEncodedLength:(NSUInteger)arg0 ;


@end


#endif