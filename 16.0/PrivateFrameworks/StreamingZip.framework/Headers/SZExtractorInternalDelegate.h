// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SZEXTRACTORINTERNALDELEGATE_H
#define SZEXTRACTORINTERNALDELEGATE_H

@protocol StreamingUnzipDelegateProtocol, SZExtractorDelegate;

#import <Foundation/Foundation.h>


@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol>



@property (weak) NSObject<SZExtractorDelegate> *delegate; // ivar: delegate


-(void)extractionCompleteAtArchivePath:(id)arg0 ;
-(void)extractionEnteredPassThroughMode;
-(void)setExtractionProgress:(CGFloat)arg0 ;


@end


#endif