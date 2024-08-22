// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXMUSICCURATIONRESULT_H
#define _PXMUSICCURATIONRESULT_H

@class NSError, NSDictionary;
@protocol PXMusicCurationResult;

#import <Foundation/Foundation.h>


@interface _PXMusicCurationResult : NSObject <PXMusicCurationResult>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL isComplete; // ivar: _isComplete
@property (copy, nonatomic) NSDictionary *songsByCategory; // ivar: _songsByCategory


-(id)description;
-(id)init;


@end


#endif