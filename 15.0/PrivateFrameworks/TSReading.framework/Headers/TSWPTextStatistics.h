// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTSTATISTICS_H
#define TSWPTEXTSTATISTICS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPTextStatistics : NSObject <NSCopying>



@property (nonatomic) NSUInteger charactersNoWhiteSpace; // ivar: _charactersNoWhiteSpace
@property (nonatomic) BOOL isAccurate; // ivar: _isAccurate
@property (nonatomic) NSUInteger paragraphCount; // ivar: _paragraphCount
@property (nonatomic) NSUInteger wordCount; // ivar: _wordCount


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addTextStatistics:(id)arg0 ;
-(void)removeTextStatistics:(id)arg0 ;
-(void)resetStatistics;
-(void)setTextStatistics:(id)arg0 ;


@end


#endif