// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLCAPTUREDESCRIPTOR_H
#define MTLCAPTUREDESCRIPTOR_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLCaptureDescriptor : NSObject <NSCopying>



@property (retain, nonatomic) id *captureObject; // ivar: _captureObject
@property (nonatomic) NSInteger destination; // ivar: _destination
@property (copy, nonatomic) NSURL *outputURL; // ivar: _outputURL


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif