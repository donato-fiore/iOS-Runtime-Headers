// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPDOWNLOADPROGRESS_H
#define LPDOWNLOADPROGRESS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LPDownloadProgress : NSObject

@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle


-(id)initWithProgress:(CGFloat)arg0 subtitle:(id)arg1 isFinished:(BOOL)arg2 ;


@end


#endif