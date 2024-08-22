// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNRECOGNIZEDOCUMENTELEMENTSREQUESTELEMENTCONFIGURATION_H
#define VNRECOGNIZEDOCUMENTELEMENTSREQUESTELEMENTCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject <NSCopying>



@property BOOL generateSegmentationMask; // ivar: _generateSegmentationMask
@property BOOL recognize; // ivar: _recognize


+(id)newConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif