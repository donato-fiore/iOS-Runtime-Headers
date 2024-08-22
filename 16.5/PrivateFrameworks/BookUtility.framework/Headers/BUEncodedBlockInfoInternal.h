// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUENCODEDBLOCKINFOINTERNAL_H
#define BUENCODEDBLOCKINFOINTERNAL_H

@class NSString;
@protocol BUEncodedBlockInfo;

#import <Foundation/Foundation.h>


@interface BUEncodedBlockInfoInternal : NSObject <BUEncodedBlockInfo>



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